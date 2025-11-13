// 函数: sub_142205a00
// 地址: 0x142205a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int32_t rax = *(arg2 + 0x118)
int64_t rcx = *(arg2 + 0xf8)
int32_t result = rax - 1
int64_t r12 = *(arg2 + 0xf0)
int32_t r13 = *(arg2 + 0x114)
int64_t result_1 = sx.q(result)
int64_t arg_10 = rcx

if (rax - 1 s>= 0)
    int64_t result_2
    
    do
        void* rdi_3 = zx.q(zx.d(*(rcx + (result_1 << 1))) * r13) + r12
        
        if ((*(rdi_3 + 0x5c) & 0x4000000) == 0)
            char rax_1 = (*(arg1 + 0x88)).b
            void* rbx_2 = zx.q(arg3) + rdi_3
            int128_t zmm2
            
            if ((rax_1 & 2) != 0)
                int64_t var_c0_1 = 0
                int64_t* rdx
                
                if ((rax_1 & 4) != 0)
                    zmm2 = *(arg2 + 0x12c)
                    void var_7c
                    rdx = &var_7c
                else
                    zmm2 = *(rdi_3 + 0xc)
                    void var_88
                    rdx = &var_88
                
                int64_t* rax_2 =
                    sub_141fe56b0(arg1 + 0x40, rdx, zmm2, arg4, (*(arg2 + 0x18)).d, nullptr)
                int32_t rax_3 = rax_2[1].d
                int64_t var_b8_1 = *rax_2
                *(rbx_2 + 0x3c) = *(rbx_2 + 0xc)
                *(rbx_2 + 0x44) = *(rbx_2 + 0x14)
                int64_t zmm0_1
                zmm0_1.d = var_b8_1.d.d f+ *(rbx_2 + 0xc)
                arg4.d = var_b8_1:4.d.d f+ *(rbx_2 + 0x10)
                *(rbx_2 + 0xc) = zmm0_1.d
                zmm0_1.d = rax_3.d f+ *(rbx_2 + 0x14)
                *(rbx_2 + 0x10) = arg4.d
                *(rbx_2 + 0x14) = zmm0_1.d
            
            char rax_5 = (*(arg1 + 0xd8)).b
            
            if ((rax_5 & 2) != 0)
                int64_t var_c0_2 = 0
                int64_t* rdx_1
                
                if ((rax_5 & 4) != 0)
                    zmm2 = *(arg2 + 0x12c)
                    void var_64
                    rdx_1 = &var_64
                else
                    zmm2 = *(rdi_3 + 0xc)
                    void var_70
                    rdx_1 = &var_70
                
                int64_t* rax_6 =
                    sub_141fe56b0(arg1 + 0x90, rdx_1, zmm2, arg4, (*(arg2 + 0x18)).d, nullptr)
                int32_t rax_7 = rax_6[1].d
                int64_t var_a8_1 = *rax_6
                int64_t zmm0_2
                zmm0_2.d = var_a8_1.d.d f+ *(rbx_2 + 0x18)
                arg4.d = var_a8_1:4.d.d f+ *(rbx_2 + 0x1c)
                *(rbx_2 + 0x18) = zmm0_2.d
                zmm0_2.d = rax_7.d f+ *(rbx_2 + 0x20)
                *(rbx_2 + 0x1c) = arg4.d
                *(rbx_2 + 0x20) = zmm0_2.d
            
            result = *(arg1 + 0x128)
            
            if ((result.b & 2) != 0)
                int64_t* rdx_2
                
                if ((result.b & 4) != 0)
                    zmm2 = *(arg2 + 0x12c)
                    void var_4c
                    rdx_2 = &var_4c
                else
                    zmm2 = *(rdi_3 + 0xc)
                    void var_58
                    rdx_2 = &var_58
                
                int64_t var_c0_3 = 0
                int64_t* rax_8 =
                    sub_141fe56b0(arg1 + 0xe0, rdx_2, zmm2, arg4, (*(arg2 + 0x18)).d, nullptr)
                result = rax_8[1].d
                int64_t var_98_1 = *rax_8
                int64_t zmm0_3
                zmm0_3.d = var_98_1.d.d f+ *(rbx_2 + 0x30)
                arg4.d = var_98_1:4.d.d f+ *(rbx_2 + 0x34)
                *(rbx_2 + 0x30) = zmm0_3.d
                zmm0_3.d = result.d f+ *(rbx_2 + 0x38)
                *(rbx_2 + 0x34) = arg4.d
                *(rbx_2 + 0x38) = zmm0_3.d
            
            arg3 = arg_18
            rcx = arg_10
        
        result_2 = result_1
        result_1 -= 1
    while (result_2 - 1 s>= 0)

return result
