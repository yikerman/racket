
/* The ..._FPSEL..._xd... operations select fpu-and-_ld mode versus default-and-_d mode. */

#ifdef MZ_LONG_DOUBLE
# define MZ_FPUSEL(use_fpu, b1, b2) (use_fpu ? b1 : b2)
# define MZ_FPUSEL_STMT(use_fpu, b1, b2) if (use_fpu) { b1; } else { b2; }
# define MZ_FPUSEL_STMT_ONLY(use_fpu, b1) if (use_fpu) { b1; }
# define JIT_FPUSEL_FPR_NUM(use_fpu) (use_fpu ? JIT_FPU_FPR_NUM : JIT_FPR_NUM)
# define JIT_FPUSEL_FPR_0(use_fpu, d) (use_fpu ? JIT_FPU_FPR_0(d) : JIT_FPR_0(d))
# define JIT_FPUSEL_FPR_1(use_fpu, d) (use_fpu ? JIT_FPU_FPR_1(d) : JIT_FPR_1(d))
# define jit_FPSEL_fxch(use_fpu, rs, op) (use_fpu ? jit_fpu_fxch(rs, op) : jit_fxch(rs, op))
# define jit_FPSEL_addr_xd(use_fpu, rd,s1,s2) (use_fpu ? jit_fpu_addr_ld(rd,s1,s2) : jit_addr_d(rd,s1,s2))
# define jit_FPSEL_subr_xd(use_fpu, rd,s1,s2) (use_fpu ? jit_fpu_subr_ld(rd,s1,s2) : jit_subr_d(rd,s1,s2))
# define jit_FPSEL_subrr_xd(use_fpu, rd,s1,s2) (use_fpu ? jit_fpu_subrr_ld(rd,s1,s2) : jit_subrr_d(rd,s1,s2))
# define jit_FPSEL_mulr_xd(use_fpu, rd,s1,s2) (use_fpu ? jit_fpu_mulr_ld(rd,s1,s2) : jit_mulr_d(rd,s1,s2))
# define jit_FPSEL_ldivr_xd(use_fpu, rd,s1,s2) (use_fpu ? jit_fpu_ldivr_ld(rd,s1,s2) : jit_ldivr_d(rd,s1,s2))
# define jit_FPSEL_ldivrr_xd(use_fpu, rd,s1,s2) (use_fpu ? jit_fpu_ldivrr_ld(rd,s1,s2) : jit_ldivrr_d(rd,s1,s2))
# define jit_FPSEL_abs_xd(use_fpu, rd,rs) (use_fpu ? jit_fpu_abs_ld(rd,rs) : jit_abs_d(rd,rs))
# define jit_FPSEL_negr_xd(use_fpu, rd,rs) (use_fpu ? jit_fpu_negr_ld(rd,rs) : jit_negr_d(rd,rs))
# define jit_FPSEL_sqrt_xd(use_fpu, rd,rs) (use_fpu ? jit_fpu_sqrt_ld(rd,rs) : jit_sqrt_d(rd,rs))
# define jit_FPSEL_addr_xd_fppop(use_fpu, rd,s1,s2) (use_fpu ? jit_fpu_addr_ld_fppop(rd,s1,s2) : jit_addr_d_fppop(rd,s1,s2))
# define jit_FPSEL_subr_xd_fppop(use_fpu, rd,s1,s2) (use_fpu ? jit_fpu_subr_ld_fppop(rd,s1,s2) : jit_subr_d_fppop(rd,s1,s2))
# define jit_FPSEL_subrr_xd_fppop(use_fpu, rd,s1,s2) (use_fpu ? jit_fpu_subrr_ld_fppop(rd,s1,s2) : jit_subrr_d_fppop(rd,s1,s2))
# define jit_FPSEL_mulr_xd_fppop(use_fpu, rd,s1,s2) (use_fpu ? jit_fpu_mulr_ld_fppop(rd,s1,s2) : jit_mulr_d_fppop(rd,s1,s2))
# define jit_FPSEL_divr_xd_fppop(use_fpu, rd,s1,s2) (use_fpu ? jit_fpu_divr_ld_fppop(rd,s1,s2) : jit_divr_d_fppop(rd,s1,s2))
# define jit_FPSEL_divrr_xd_fppop(use_fpu, rd,s1,s2) (use_fpu ? jit_fpu_divrr_ld_fppop(rd,s1,s2) : jit_divrr_d_fppop(rd,s1,s2))
# define jit_FPSEL_negr_xd_fppop(use_fpu, rd,rs) (use_fpu ? jit_fpu_negr_ld_fppop(rd,rs) : jit_negr_d_fppop(rd,rs))
# define jit_FPSEL_abs_xd_fppop(use_fpu, rd,rs) (use_fpu ? jit_fpu_abs_ld_fppop(rd,rs) : jit_abs_d_fppop(rd,rs))
# define jit_FPSEL_sqrt_xd_fppop(use_fpu, rd,rs) (use_fpu ? jit_fpu_sqrt_ld_fppop(rd,rs) : jit_sqrt_d_fppop(rd,rs))
# define jit_FPSEL_movr_xd(use_fpu, rd,s1) (use_fpu ? jit_fpu_movr_ld(rd,s1) : jit_movr_d(rd,s1))
# define jit_FPSEL_movr_xd_rel(use_fpu, rd,s1) (use_fpu ? jit_fpu_movr_ld_rel(rd,s1) : jit_movr_d_rel(rd,s1))
# define jit_FPSEL_movr_xd_fppush(use_fpu, rd,s1) (use_fpu ? jit_fpu_movr_ld_fppush(rd,s1) : jit_movr_d_fppush(rd,s1))
# define jit_FPSEL_ldi_xd(use_fpu, rd, is) (use_fpu ? jit_fpu_ldi_ld(rd, is) : jit_ldi_d(rd, is))
# define jit_FPSEL_ldi_xd_fppush(use_fpu, rd, is) (use_fpu ? jit_fpu_ldi_ld_fppush(rd, is) : jit_ldi_d_fppush(rd, is))
# define jit_FPSEL_ldr_xd(use_fpu, rd, rs) (use_fpu ? jit_fpu_ldr_ld(rd, rs) : jit_ldr_d(rd, rs))
# define jit_FPSEL_ldr_xd_fppush(use_fpu, rd, rs) (use_fpu ? jit_fpu_ldr_ld_fppush(rd, rs) : jit_ldr_d_fppush(rd, rs))
# define jit_FPSEL_ldxi_xd(use_fpu, rd, rs, is) (use_fpu ? jit_fpu_ldxi_ld(rd, rs, is) : jit_ldxi_d(rd, rs, is))
# define jit_FPSEL_ldxi_xd_fppush(use_fpu, rd, rs, is) (use_fpu ? jit_fpu_ldxi_ld_fppush(rd, rs, is) : jit_ldxi_d_fppush(rd, rs, is))
# define jit_FPSEL_ldxr_xd(use_fpu, rd, s1, s2) (use_fpu ? jit_fpu_ldxr_ld(rd, s1, s2) : jit_ldxr_d(rd, s1, s2))
# define jit_FPSEL_ldxr_xd_fppush(use_fpu, rd, s1, s2) (use_fpu ? jit_fpu_ldxr_ld_fppush(rd, s1, s2) : jit_ldxr_d_fppush(rd, s1, s2))
# define jit_FPSEL_extr_i_xd_fppush(use_fpu, rd, rs) (use_fpu ? jit_fpu_extr_i_ld_fppush(rd, rs) : jit_extr_i_d_fppush(rd, rs))
# define jit_FPSEL_extr_l_xd_fppush(use_fpu, rd, rs) (use_fpu ? jit_fpu_extr_l_ld_fppush(rd, rs) : jit_extr_l_d_fppush(rd, rs))
# define jit_FPSEL_sti_xd_fppop(use_fpu, id, rs) (use_fpu ? jit_fpu_sti_ld_fppop(id, rs) : jit_sti_d_fppop(id, rs))
# define jit_FPSEL_stxi_xd_fppop(use_fpu, id, rd, rs) (use_fpu ? jit_fpu_stxi_ld_fppop(id, rd, rs) : jit_stxi_d_fppop(id, rd, rs))
# define jit_FPSEL_str_xd_fppop(use_fpu, rd, rs) (use_fpu ? jit_fpu_str_ld_fppop(rd, rs) : jit_str_d_fppop(rd, rs))
# define jit_FPSEL_stxr_xd_fppop(use_fpu, d1, d2, rs) (use_fpu ? jit_fpu_stxr_ld_fppop(d1, d2, rs) : jit_stxr_d_fppop(d1, d2, rs))
# define jit_FPSEL_roundr_xd_i(use_fpu, rd, rs) (use_fpu ? jit_fpu_roundr_ld_i(rd, rs) : jit_roundr_d_i(rd, rs))
# define jit_FPSEL_roundr_xd_l(use_fpu, rd, rs) (use_fpu ? jit_fpu_roundr_ld_l(rd, rs) : jit_roundr_d_l(rd, rs))
# define jit_FPSEL_roundr_xd_l_fppop(use_fpu, rd, rs) (use_fpu ? jit_fpu_roundr_ld_l_fppop(rd, rs) : jit_roundr_d_l_fppop(rd, rs))
# define jit_FPSEL_truncr_xd_i(use_fpu, rd, rs) (use_fpu ? jit_fpu_truncr_ld_i(rd, rs) : jit_truncr_d_i(rd, rs))
# define jit_FPSEL_truncr_xd_l(use_fpu, rd, rs) (use_fpu ? jit_fpu_truncr_ld_l(rd, rs) : jit_truncr_d_l(rd, rs))
# define jit_FPSEL_truncr_xd_l_fppop(use_fpu, rd, rs) (use_fpu ? jit_fpu_truncr_ld_l_fppop(rd, rs) : jit_truncr_d_l_fppop(rd, rs))
# define jit_FPSEL_bger_xd(use_fpu, d, s1, s2) (use_fpu ? jit_fpu_bger_ld(d, s1, s2) : jit_bger_d(d, s1, s2))
# define jit_FPSEL_bltr_xd(use_fpu, d, s1, s2) (use_fpu ? jit_fpu_bltr_ld(d, s1, s2) : jit_bltr_d(d, s1, s2))
# define jit_FPSEL_beqr_xd(use_fpu, d, s1, s2) (use_fpu ? jit_fpu_beqr_ld(d, s1, s2) : jit_beqr_d(d, s1, s2))
# define jit_FPSEL_bantieqr_xd(use_fpu, d, s1, s2) (use_fpu ? jit_fpu_bantieqr_ld(d, s1, s2) : jit_bantieqr_d(d, s1, s2))
# define jit_FPSEL_bger_xd_fppop(use_fpu, d, s1, s2) (use_fpu ? jit_fpu_bger_ld_fppop(d, s1, s2) : jit_bger_d_fppop(d, s1, s2))
# define jit_FPSEL_bantiger_xd_fppop(use_fpu, d, s1, s2) (use_fpu ? jit_fpu_bantiger_ld_fppop(d, s1, s2) : jit_bantiger_d_fppop(d, s1, s2))
# define jit_FPSEL_bler_xd_fppop(use_fpu, d, s1, s2) (use_fpu ? jit_fpu_bler_ld_fppop(d, s1, s2) : jit_bler_d_fppop(d, s1, s2))
# define jit_FPSEL_bantiler_xd_fppop(use_fpu, d, s1, s2) (use_fpu ? jit_fpu_bantiler_ld_fppop(d, s1, s2) : jit_bantiler_d_fppop(d, s1, s2))
# define jit_FPSEL_bgtr_xd_fppop(use_fpu, d, s1, s2) (use_fpu ? jit_fpu_bgtr_ld_fppop(d, s1, s2) : jit_bgtr_d_fppop(d, s1, s2))
# define jit_FPSEL_bantigtr_xd_fppop(use_fpu, d, s1, s2) (use_fpu ? jit_fpu_bantigtr_ld_fppop(d, s1, s2) : jit_bantigtr_d_fppop(d, s1, s2))
# define jit_FPSEL_bltr_xd_fppop(use_fpu, d, s1, s2) (use_fpu ? jit_fpu_bltr_ld_fppop(d, s1, s2) : jit_bltr_d_fppop(d, s1, s2))
# define jit_FPSEL_bantiltr_xd_fppop(use_fpu, d, s1, s2) (use_fpu ? jit_fpu_bantiltr_ld_fppop(d, s1, s2) : jit_bantiltr_d_fppop(d, s1, s2))
# define jit_FPSEL_beqr_xd_fppop(use_fpu, d, s1, s2) (use_fpu ? jit_fpu_beqr_ld_fppop(d, s1, s2) : jit_beqr_d_fppop(d, s1, s2))
# define jit_FPSEL_bantieqr_xd_fppop(use_fpu, d, s1, s2) (use_fpu ? jit_fpu_bantieqr_ld_fppop(d, s1, s2) : jit_bantieqr_d_fppop(d, s1, s2))
#else
# define MZ_FPUSEL(use_fpu, b1, b2) b2
# define MZ_FPUSEL_STMT(use_fpu, b1, b2) { b2; }
# define MZ_FPUSEL_STMT_ONLY(use_fpu, b1) /* empty */
# define JIT_FPUSEL_FPR_NUM(use_fpu) JIT_FPR_NUM
# define JIT_FPUSEL_FPR_0(use_fpu, d) JIT_FPR_0(d)
# define JIT_FPUSEL_FPR_1(use_fpu, d) JIT_FPR_1(d)
# define jit_FPSEL_fxch(use_fpu, rs, op) jit_fxch(rs, op)
# define jit_FPSEL_addr_xd(use_fpu, rd,s1,s2) jit_addr_d(rd,s1,s2)
# define jit_FPSEL_subr_xd(use_fpu, rd,s1,s2) jit_subr_d(rd,s1,s2)
# define jit_FPSEL_subrr_xd(use_fpu, rd,s1,s2) jit_subrr_d(rd,s1,s2)
# define jit_FPSEL_mulr_xd(use_fpu, rd,s1,s2) jit_mulr_d(rd,s1,s2)
# define jit_FPSEL_ldivr_xd(use_fpu, rd,s1,s2) jit_ldivr_d(rd,s1,s2)
# define jit_FPSEL_ldivrr_xd(use_fpu, rd,s1,s2) jit_ldivrr_d(rd,s1,s2)
# define jit_FPSEL_abs_xd(use_fpu, rd,rs) jit_abs_d(rd,rs)
# define jit_FPSEL_negr_xd(use_fpu, rd,rs) jit_negr_d(rd,rs)
# define jit_FPSEL_sqrt_xd(use_fpu, rd,rs) jit_sqrt_d(rd,rs)
# define jit_FPSEL_addr_xd_fppop(use_fpu, rd,s1,s2) jit_addr_d_fppop(rd,s1,s2)
# define jit_FPSEL_subr_xd_fppop(use_fpu, rd,s1,s2) jit_subr_d_fppop(rd,s1,s2)
# define jit_FPSEL_subrr_xd_fppop(use_fpu, rd,s1,s2) jit_subrr_d_fppop(rd,s1,s2)
# define jit_FPSEL_mulr_xd_fppop(use_fpu, rd,s1,s2) jit_mulr_d_fppop(rd,s1,s2)
# define jit_FPSEL_divr_xd_fppop(use_fpu, rd,s1,s2) jit_divr_d_fppop(rd,s1,s2)
# define jit_FPSEL_divrr_xd_fppop(use_fpu, rd,s1,s2) jit_divrr_d_fppop(rd,s1,s2)
# define jit_FPSEL_negr_xd_fppop(use_fpu, rd,rs) jit_negr_d_fppop(rd,rs)
# define jit_FPSEL_abs_xd_fppop(use_fpu, rd,rs) jit_abs_d_fppop(rd,rs)
# define jit_FPSEL_sqrt_xd_fppop(use_fpu, rd,rs) jit_sqrt_d_fppop(rd,rs)
# define jit_FPSEL_movr_xd(use_fpu, rd,s1) jit_movr_d(rd,s1)
# define jit_FPSEL_movr_xd_rel(use_fpu, rd,s1) jit_movr_d_rel(rd,s1)
# define jit_FPSEL_movr_xd_fppush(use_fpu, rd,s1) jit_movr_d_fppush(rd,s1)
# define jit_FPSEL_ldi_xd(use_fpu, rd, is) jit_ldi_d(rd, is)
# define jit_FPSEL_ldi_xd_fppush(use_fpu, rd, is) jit_ldi_d_fppush(rd, is)
# define jit_FPSEL_ldr_xd(use_fpu, rd, rs) jit_ldr_d(rd, rs)
# define jit_FPSEL_ldr_xd_fppush(use_fpu, rd, rs) jit_ldr_d_fppush(rd, rs)
# define jit_FPSEL_ldxi_xd(use_fpu, rd, rs, is) jit_ldxi_d(rd, rs, is)
# define jit_FPSEL_ldxi_xd_fppush(use_fpu, rd, rs, is) jit_ldxi_d_fppush(rd, rs, is)
# define jit_FPSEL_ldxr_xd(use_fpu, rd, s1, s2) jit_ldxr_d(rd, s1, s2)
# define jit_FPSEL_ldxr_xd_fppush(use_fpu, rd, s1, s2) jit_ldxr_d_fppush(rd, s1, s2)
# define jit_FPSEL_extr_i_xd_fppush(use_fpu, rd, rs) jit_extr_i_d_fppush(rd, rs)
# define jit_FPSEL_extr_l_xd_fppush(use_fpu, rd, rs) jit_extr_l_d_fppush(rd, rs)
# define jit_FPSEL_sti_xd_fppop(use_fpu, id, rs) jit_sti_d_fppop(id, rs)
# define jit_FPSEL_stxi_xd_fppop(use_fpu, id, rd, rs) jit_stxi_d_fppop(id, rd, rs)
# define jit_FPSEL_str_xd_fppop(use_fpu, rd, rs) jit_str_d_fppop(rd, rs)
# define jit_FPSEL_stxr_xd_fppop(use_fpu, d1, d2, rs) jit_stxr_d_fppop(d1, d2, rs)
# define jit_FPSEL_roundr_xd_i(use_fpu, rd, rs) jit_roundr_d_i(rd, rs)
# define jit_FPSEL_roundr_xd_l(use_fpu, rd, rs) jit_roundr_d_l(rd, rs)
# define jit_FPSEL_roundr_xd_l_fppop(use_fpu, rd, rs) jit_roundr_d_l_fppop(rd, rs)
# define jit_FPSEL_truncr_xd_i(use_fpu, rd, rs) jit_truncr_d_i(rd, rs)
# define jit_FPSEL_truncr_xd_l(use_fpu, rd, rs) jit_truncr_d_l(rd, rs)
# define jit_FPSEL_truncr_xd_l_fppop(use_fpu, rd, rs) jit_truncr_d_l_fppop(rd, rs)
# define jit_FPSEL_bger_xd(use_fpu, d, s1, s2) jit_bger_d(d, s1, s2)
# define jit_FPSEL_bltr_xd(use_fpu, d, s1, s2) jit_bltr_d(d, s1, s2)
# define jit_FPSEL_beqr_xd(use_fpu, d, s1, s2) jit_beqr_d(d, s1, s2)
# define jit_FPSEL_bantieqr_xd(use_fpu, d, s1, s2) jit_bantieqr_d(d, s1, s2)
# define jit_FPSEL_bger_xd_fppop(use_fpu, d, s1, s2) jit_bger_d_fppop(d, s1, s2)
# define jit_FPSEL_bantiger_xd_fppop(use_fpu, d, s1, s2) jit_bantiger_d_fppop(d, s1, s2)
# define jit_FPSEL_bler_xd_fppop(use_fpu, d, s1, s2) jit_bler_d_fppop(d, s1, s2)
# define jit_FPSEL_bantiler_xd_fppop(use_fpu, d, s1, s2) jit_bantiler_d_fppop(d, s1, s2)
# define jit_FPSEL_bgtr_xd_fppop(use_fpu, d, s1, s2) jit_bgtr_d_fppop(d, s1, s2)
# define jit_FPSEL_bantigtr_xd_fppop(use_fpu, d, s1, s2) jit_bantigtr_d_fppop(d, s1, s2)
# define jit_FPSEL_bltr_xd_fppop(use_fpu, d, s1, s2) jit_bltr_d_fppop(d, s1, s2)
# define jit_FPSEL_bantiltr_xd_fppop(use_fpu, d, s1, s2) jit_bantiltr_d_fppop(d, s1, s2)
# define jit_FPSEL_beqr_xd_fppop(use_fpu, d, s1, s2) jit_beqr_d_fppop(d, s1, s2)
# define jit_FPSEL_bantieqr_xd_fppop(use_fpu, d, s1, s2) jit_bantieqr_d_fppop(d, s1, s2)
#endif