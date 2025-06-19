/* Generated automatically by the program 'build/genpreds'
   from the machine description file '../.././gcc/gcc/config/riscv/riscv.md'.  */

#ifndef GCC_TM_PREDS_H
#define GCC_TM_PREDS_H

#ifdef HAVE_MACHINE_MODES
extern bool general_operand (rtx, machine_mode);
extern bool address_operand (rtx, machine_mode);
extern bool register_operand (rtx, machine_mode);
extern bool pmode_register_operand (rtx, machine_mode);
extern bool scratch_operand (rtx, machine_mode);
extern bool immediate_operand (rtx, machine_mode);
extern bool const_int_operand (rtx, machine_mode);
extern bool const_scalar_int_operand (rtx, machine_mode);
extern bool const_double_operand (rtx, machine_mode);
extern bool nonimmediate_operand (rtx, machine_mode);
extern bool nonmemory_operand (rtx, machine_mode);
extern bool push_operand (rtx, machine_mode);
extern bool pop_operand (rtx, machine_mode);
extern bool memory_operand (rtx, machine_mode);
extern bool indirect_operand (rtx, machine_mode);
extern bool ordered_comparison_operator (rtx, machine_mode);
extern bool comparison_operator (rtx, machine_mode);
extern bool aligned_register_operand (rtx, machine_mode);
extern bool const_arith_operand (rtx, machine_mode);
extern bool arith_operand (rtx, machine_mode);
extern bool lui_operand (rtx, machine_mode);
extern bool sfb_alu_operand (rtx, machine_mode);
extern bool movcc_operand (rtx, machine_mode);
extern bool const_csr_operand (rtx, machine_mode);
extern bool const_0_3_operand (rtx, machine_mode);
extern bool const_0_10_operand (rtx, machine_mode);
extern bool csr_operand (rtx, machine_mode);
extern bool vector_scalar_shift_operand (rtx, machine_mode);
extern bool sle_operand (rtx, machine_mode);
extern bool sleu_operand (rtx, machine_mode);
extern bool const_0_operand (rtx, machine_mode);
extern bool const_1_operand (rtx, machine_mode);
extern bool const_1_or_2_operand (rtx, machine_mode);
extern bool const_1_or_4_operand (rtx, machine_mode);
extern bool const_1_or_8_operand (rtx, machine_mode);
extern bool reg_or_0_operand (rtx, machine_mode);
extern bool stack_push_up_to_ra_operand (rtx, machine_mode);
extern bool stack_push_up_to_s0_operand (rtx, machine_mode);
extern bool stack_push_up_to_s1_operand (rtx, machine_mode);
extern bool stack_push_up_to_s2_operand (rtx, machine_mode);
extern bool stack_push_up_to_s3_operand (rtx, machine_mode);
extern bool stack_push_up_to_s4_operand (rtx, machine_mode);
extern bool stack_push_up_to_s5_operand (rtx, machine_mode);
extern bool stack_push_up_to_s6_operand (rtx, machine_mode);
extern bool stack_push_up_to_s7_operand (rtx, machine_mode);
extern bool stack_push_up_to_s8_operand (rtx, machine_mode);
extern bool stack_push_up_to_s9_operand (rtx, machine_mode);
extern bool stack_push_up_to_s11_operand (rtx, machine_mode);
extern bool stack_pop_up_to_ra_operand (rtx, machine_mode);
extern bool stack_pop_up_to_s0_operand (rtx, machine_mode);
extern bool stack_pop_up_to_s1_operand (rtx, machine_mode);
extern bool stack_pop_up_to_s2_operand (rtx, machine_mode);
extern bool stack_pop_up_to_s3_operand (rtx, machine_mode);
extern bool stack_pop_up_to_s4_operand (rtx, machine_mode);
extern bool stack_pop_up_to_s5_operand (rtx, machine_mode);
extern bool stack_pop_up_to_s6_operand (rtx, machine_mode);
extern bool stack_pop_up_to_s7_operand (rtx, machine_mode);
extern bool stack_pop_up_to_s8_operand (rtx, machine_mode);
extern bool stack_pop_up_to_s9_operand (rtx, machine_mode);
extern bool stack_pop_up_to_s11_operand (rtx, machine_mode);
extern bool a0a1_reg_operand (rtx, machine_mode);
extern bool zcmp_mv_sreg_operand (rtx, machine_mode);
extern bool branch_on_bit_operand (rtx, machine_mode);
extern bool splittable_const_int_operand (rtx, machine_mode);
extern bool p2m1_shift_operand (rtx, machine_mode);
extern bool high_mask_shift_operand (rtx, machine_mode);
extern bool move_operand (rtx, machine_mode);
extern bool symbolic_operand (rtx, machine_mode);
extern bool absolute_symbolic_operand (rtx, machine_mode);
extern bool plt_symbolic_operand (rtx, machine_mode);
extern bool call_insn_operand (rtx, machine_mode);
extern bool modular_operator (rtx, machine_mode);
extern bool ne_operator (rtx, machine_mode);
extern bool equality_operator (rtx, machine_mode);
extern bool signed_order_operator (rtx, machine_mode);
extern bool subreg_lowpart_operator (rtx, machine_mode);
extern bool fp_native_comparison (rtx, machine_mode);
extern bool fp_scc_comparison (rtx, machine_mode);
extern bool fp_branch_comparison (rtx, machine_mode);
extern bool gpr_save_operation (rtx, machine_mode);
extern bool single_bit_mask_operand (rtx, machine_mode);
extern bool arith_or_zbs_operand (rtx, machine_mode);
extern bool not_single_bit_mask_operand (rtx, machine_mode);
extern bool arith_or_mode_mask_or_zbs_operand (rtx, machine_mode);
extern bool const_si_mask_operand (rtx, machine_mode);
extern bool const_di_mask_operand (rtx, machine_mode);
extern bool imm5_operand (rtx, machine_mode);
extern bool imm123_operand (rtx, machine_mode);
extern bool consecutive_bits_operand (rtx, machine_mode);
extern bool const_two_s12 (rtx, machine_mode);
extern bool immediate_register_operand (rtx, machine_mode);
extern bool const_int6s_operand (rtx, machine_mode);
extern bool int6s_operand (rtx, machine_mode);
extern bool const_int2_operand (rtx, machine_mode);
extern bool const_int6_operand (rtx, machine_mode);
extern bool int6_operand (rtx, machine_mode);
extern bool const_int5s_operand (rtx, machine_mode);
extern bool vector_length_operand (rtx, machine_mode);
extern bool autovec_length_operand (rtx, machine_mode);
extern bool reg_or_mem_operand (rtx, machine_mode);
extern bool reg_or_int_operand (rtx, machine_mode);
extern bool vector_const_0_operand (rtx, machine_mode);
extern bool vector_const_int_or_double_0_operand (rtx, machine_mode);
extern bool vector_move_operand (rtx, machine_mode);
extern bool vector_all_trues_mask_operand (rtx, machine_mode);
extern bool vector_least_significant_set_mask_operand (rtx, machine_mode);
extern bool vector_mask_operand (rtx, machine_mode);
extern bool vector_broadcast_mask_operand (rtx, machine_mode);
extern bool vector_undef_operand (rtx, machine_mode);
extern bool vector_merge_operand (rtx, machine_mode);
extern bool autovec_else_operand (rtx, machine_mode);
extern bool maskload_else_operand (rtx, machine_mode);
extern bool vector_arith_operand (rtx, machine_mode);
extern bool vector_neg_arith_operand (rtx, machine_mode);
extern bool vector_shift_operand (rtx, machine_mode);
extern bool vector_perm_operand (rtx, machine_mode);
extern bool vector_gs_extension_operand (rtx, machine_mode);
extern bool vector_gs_scale_operand_16_rv32 (rtx, machine_mode);
extern bool vector_gs_scale_operand_32_rv32 (rtx, machine_mode);
extern bool ltge_operator (rtx, machine_mode);
extern bool comparison_except_ltge_operator (rtx, machine_mode);
extern bool comparison_except_ge_operator (rtx, machine_mode);
extern bool ge_operator (rtx, machine_mode);
extern bool pmode_reg_or_uimm5_operand (rtx, machine_mode);
extern bool pmode_reg_or_0_operand (rtx, machine_mode);
extern bool vector_eew8_stride_operand (rtx, machine_mode);
extern bool vector_eew16_stride_operand (rtx, machine_mode);
extern bool vector_eew32_stride_operand (rtx, machine_mode);
extern bool vector_eew64_stride_operand (rtx, machine_mode);
extern bool vector_any_register_operand (rtx, machine_mode);
extern bool direct_broadcast_operand (rtx, machine_mode);
extern bool const_nottwobits_operand (rtx, machine_mode);
extern bool const_nottwobits_not_arith_operand (rtx, machine_mode);
extern bool consecutive_bits32_operand (rtx, machine_mode);
extern bool shifted_const_arith_operand (rtx, machine_mode);
extern bool const_twobits_operand (rtx, machine_mode);
extern bool const_twobits_not_arith_operand (rtx, machine_mode);
extern bool uimm_extra_bit_operand (rtx, machine_mode);
extern bool uimm_extra_bit_or_twobits (rtx, machine_mode);
extern bool not_uimm_extra_bit_operand (rtx, machine_mode);
extern bool not_uimm_extra_bit_or_nottwobits (rtx, machine_mode);
extern bool pcrel_symbol_operand (rtx, machine_mode);
extern bool x1x5_operand (rtx, machine_mode);
#endif /* HAVE_MACHINE_MODES */

#ifdef GCC_HARD_REG_SET_H
struct target_constraints {
  HARD_REG_SET register_filters[1];
};

extern struct target_constraints default_target_constraints;
#if SWITCHABLE_TARGET
extern struct target_constraints *this_target_constraints;
#else
#define this_target_constraints (&default_target_constraints)
#endif

#define TEST_REGISTER_FILTER_BIT(ID, REGNO) \
  TEST_HARD_REG_BIT (this_target_constraints->register_filters[ID], REGNO)

inline bool
test_register_filters (unsigned int mask, unsigned int regno)
{
  for (unsigned int id = 0; id < 1; ++id)
    if ((mask & (1U << id))
	&& !TEST_REGISTER_FILTER_BIT (id, regno))
      return false;
  return true;
}
#endif

#define CONSTRAINT_NUM_DEFINED_P 1
enum constraint_num
{
  CONSTRAINT__UNKNOWN = 0,
  CONSTRAINT_r,
  CONSTRAINT_f,
  CONSTRAINT_j,
  CONSTRAINT_R,
  CONSTRAINT_l,
  CONSTRAINT_cr,
  CONSTRAINT_cf,
  CONSTRAINT_zmvf,
  CONSTRAINT_zmvr,
  CONSTRAINT_vr,
  CONSTRAINT_vd,
  CONSTRAINT_vm,
  CONSTRAINT_I,
  CONSTRAINT_J,
  CONSTRAINT_P,
  CONSTRAINT_K,
  CONSTRAINT_L,
  CONSTRAINT_MiG,
  CONSTRAINT_m,
  CONSTRAINT_o,
  CONSTRAINT_A,
  CONSTRAINT_Wdm,
  CONSTRAINT_th__m__mia,
  CONSTRAINT_th__m__mib,
  CONSTRAINT_th__m__mir,
  CONSTRAINT_th__m__miu,
  CONSTRAINT_th__m__noi,
  CONSTRAINT_p,
  CONSTRAINT_k01,
  CONSTRAINT_k02,
  CONSTRAINT_k03,
  CONSTRAINT_k04,
  CONSTRAINT_k08,
  CONSTRAINT_Ds3,
  CONSTRAINT_DsS,
  CONSTRAINT_DsD,
  CONSTRAINT_DbS,
  CONSTRAINT_DnS,
  CONSTRAINT_G,
  CONSTRAINT_S,
  CONSTRAINT_U,
  CONSTRAINT_zfli,
  CONSTRAINT_vp,
  CONSTRAINT_vu,
  CONSTRAINT_vi,
  CONSTRAINT_vj,
  CONSTRAINT_vk,
  CONSTRAINT_vl,
  CONSTRAINT_Wc0,
  CONSTRAINT_Wc1,
  CONSTRAINT_Wb1,
  CONSTRAINT_CV__alu__pow2,
  CONSTRAINT_CV__bi__sign5,
  CONSTRAINT_CV__simd__si6,
  CONSTRAINT_CV__simd__un6,
  CONSTRAINT_CV__simd__i01,
  CONSTRAINT_CV__simd__i02,
  CONSTRAINT_CV__simd__i03,
  CONSTRAINT_V,
  CONSTRAINT__l,
  CONSTRAINT__g,
  CONSTRAINT_i,
  CONSTRAINT_s,
  CONSTRAINT__c,
  CONSTRAINT_n,
  CONSTRAINT_E,
  CONSTRAINT_F,
  CONSTRAINT_X,
  CONSTRAINT_T,
  CONSTRAINT__LIMIT
};

extern enum constraint_num lookup_constraint_1 (const char *);
extern const unsigned char lookup_constraint_array[];

/* Return the constraint at the beginning of P, or CONSTRAINT__UNKNOWN if it
   isn't recognized.  */

static inline enum constraint_num
lookup_constraint (const char *p)
{
  unsigned int index = lookup_constraint_array[(unsigned char) *p];
  return (index == UCHAR_MAX
          ? lookup_constraint_1 (p)
          : (enum constraint_num) index);
}

extern bool (*constraint_satisfied_p_array[]) (rtx);

/* Return true if X satisfies constraint C.  */

static inline bool
constraint_satisfied_p (rtx x, enum constraint_num c)
{
  int i = (int) c - (int) CONSTRAINT_I;
  return i >= 0 && constraint_satisfied_p_array[i] (x);
}

static inline bool
insn_extra_register_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_r && c <= CONSTRAINT_vm;
}

static inline bool
insn_extra_memory_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_m && c <= CONSTRAINT_th__m__noi;
}

static inline bool
insn_extra_special_memory_constraint (enum constraint_num)
{
  return false;
}

static inline bool
insn_extra_relaxed_memory_constraint (enum constraint_num)
{
  return false;
}

static inline bool
insn_extra_address_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_p && c <= CONSTRAINT_p;
}

static inline void
insn_extra_constraint_allows_reg_mem (enum constraint_num c,
				      bool *allows_reg, bool *allows_mem)
{
  if (c >= CONSTRAINT_k01 && c <= CONSTRAINT_CV__simd__i03)
    return;
  if (c >= CONSTRAINT_V && c <= CONSTRAINT__g)
    {
      *allows_mem = true;
      return;
    }
  (void) c;
  *allows_reg = true;
  *allows_mem = true;
}

static inline size_t
insn_constraint_len (char fc, const char *str ATTRIBUTE_UNUSED)
{
  switch (fc)
    {
    case 'C': return 11;
    case 'D': return 3;
    case 'M': return 3;
    case 'W': return 3;
    case 'c': return 2;
    case 'k': return 3;
    case 't': return 8;
    case 'v': return 2;
    case 'z': return 4;
    default: break;
    }
  return 1;
}

#define CONSTRAINT_LEN(c_,s_) insn_constraint_len (c_,s_)

extern enum reg_class reg_class_for_constraint_1 (enum constraint_num);

static inline enum reg_class
reg_class_for_constraint (enum constraint_num c)
{
  if (insn_extra_register_constraint (c))
    return reg_class_for_constraint_1 (c);
  return NO_REGS;
}

extern bool insn_const_int_ok_for_constraint (HOST_WIDE_INT, enum constraint_num);
#define CONST_OK_FOR_CONSTRAINT_P(v_,c_,s_) \
    insn_const_int_ok_for_constraint (v_, lookup_constraint (s_))

enum constraint_type
{
  CT_REGISTER,
  CT_CONST_INT,
  CT_MEMORY,
  CT_SPECIAL_MEMORY,
  CT_RELAXED_MEMORY,
  CT_ADDRESS,
  CT_FIXED_FORM
};

static inline enum constraint_type
get_constraint_type (enum constraint_num c)
{
  if (c >= CONSTRAINT_p)
    {
      if (c >= CONSTRAINT_k01)
        return CT_FIXED_FORM;
      return CT_ADDRESS;
    }
  if (c >= CONSTRAINT_m)
    return CT_MEMORY;
  if (c >= CONSTRAINT_I)
    return CT_CONST_INT;
  return CT_REGISTER;
}

#ifdef GCC_HARD_REG_SET_H
static inline const HARD_REG_SET *
get_register_filter (constraint_num c)
{
  if (c == CONSTRAINT_R)
    return &this_target_constraints->register_filters[0];
  return nullptr;
}
#endif

static inline int
get_register_filter_id (constraint_num c)
{
  if (c == CONSTRAINT_R)
    return 0;
  return -1;
}
#endif /* tm-preds.h */
