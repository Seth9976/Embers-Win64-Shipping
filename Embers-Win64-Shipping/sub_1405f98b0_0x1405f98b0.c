// 函数: sub_1405f98b0
// 地址: 0x1405f98b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t var_38_1 = -2
EnterCriticalSection(arg1 + 0xa0)
int32_t rax = *(arg1 + 0x14c)

if (rax s>= 0 && rax s< *(arg1 + 0x98) && (*(*(arg1 + 0x60) + 8))(arg1 + 0x60) s< 0x100)
    void*** rax_2 = sub_1405eaf00()
    
    if (sub_1405fa140(&rax_2[2], arg2, arg5, arg4).b != 0)
        uint128_t zmm0_1 = (&rax_2[2]).o
        uint128_t var_18 = zmm0_1
        void* rax_3 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rax_3 != 0)
            *(rax_3 + 8) += 1
        
        (**(arg1 + 0x60))(arg1 + 0x60, &var_18)
        int64_t* rbx_2 = var_18:8.q
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                rax = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (rax == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
    
    if (rax_2 != 0)
        rax_2[1].d -= 1
        
        if (rax_2[1].d == 1)
            (**rax_2)(rax_2)
            int32_t rdi_2 = *(rax_2 + 0xc)
            *(rax_2 + 0xc) -= 1
            
            if (rdi_2 == 1)
                (*rax_2)[1](rax_2, zx.q(rdi_2))

if (arg1 != -0xa0)
    LeaveCriticalSection(arg1 + 0xa0)
