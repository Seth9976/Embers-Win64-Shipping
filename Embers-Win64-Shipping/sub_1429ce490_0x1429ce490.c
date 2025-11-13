// 函数: sub_1429ce490
// 地址: 0x1429ce490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = -2
uint64_t rdi = zx.q(arg2)

if (*(**(arg1 + 0x28) + 8) == 0)
    return sub_1429ced00(4, 
        "Failure in TopologyRefiner::RefineUniform() -- base level is uninitialized.", arg3)

if (*(arg1 + 0x48) - *(arg1 + 0x40) u>= 8)
    return sub_1429ced00(4, 
        "Failure in TopologyRefiner::RefineUniform() -- previous refinements already applied.", 
        arg3)

arg1[3] = rdi.d
arg1[2] = ((((rdi << 2).d ^ arg1[2]) & 0x3c) ^ arg1[2]) | 1
int32_t rax_9 = sub_1429d3480(*arg1)
int32_t rbx_4 = (arg2 u>> 3 & 2) | (arg4 & 0xfffffff8)
int32_t r15_1 = 1
int32_t rcx_2 = arg2 & 0xf

if (rcx_2 u>= 1)
    void** r12_1 = nullptr
    
    do
        int64_t rax_10 = 0
        
        if ((rdi.d & 0x20) == 0)
            rax_10.b = r15_1 == rcx_2
        
        rbx_4 = (rbx_4 & 0xfffffffb) | (rax_10 << 2).d
        void* rsi_1 = *(r12_1 + *(arg1 + 0x28))
        int64_t rax_13 = j_sub_140a82f30(0x1e0)
        arg4.q = rax_13
        int32_t* rbp_1
        
        if (rax_13 == 0)
            rbp_1 = nullptr
        else
            rbp_1 = sub_1429c9bd0(rax_13)
        
        struct OpenSubdiv::v3_2_0::Vtr::internal::Refinement::OpenSubdiv::v3_2_0::Vtr::internal::QuadRefinement::VTable
            ** rsi_2
        
        if (sx.q(rax_9) != 0)
            struct OpenSubdiv::v3_2_0::Vtr::internal::Refinement::VTable** rax_17 =
                j_sub_140a82f30(0x210)
            struct OpenSubdiv::v3_2_0::Vtr::internal::Refinement::VTable** arg_20 = rax_17
            
            if (rax_17 == 0)
                rsi_2 = nullptr
            else
                rsi_2 = sub_1429d8660(rax_17, rsi_1, rbp_1, &arg1[1])
        else
            struct OpenSubdiv::v3_2_0::Vtr::internal::Refinement::VTable** rax_15 =
                j_sub_140a82f30(0x1f8)
            struct OpenSubdiv::v3_2_0::Vtr::internal::Refinement::VTable** arg_18 = rax_15
            
            if (rax_15 == 0)
                rsi_2 = nullptr
            else
                rsi_2 = sub_1429d65c0(rax_15, rsi_1, rbp_1, &arg1[1])
        
        sub_1429d5a70(rsi_2, rbx_4)
        sub_1429ce880(arg1, rbp_1)
        sub_1429ce940(arg1, rsi_2)
        r15_1 += 1
        r12_1 = &r12_1[1]
        rcx_2 = arg2 & 0xf
    while (r15_1 s<= rcx_2)

return sub_1429ce9f0(arg1)
