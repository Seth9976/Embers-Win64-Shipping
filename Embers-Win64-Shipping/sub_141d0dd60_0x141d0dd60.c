// 函数: sub_141d0dd60
// 地址: 0x141d0dd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x120)
char* result = arg5

if (*result == 0)
    sub_1409740e0(arg1 + 0x80, arg2)
    uint64_t r9 = zx.q(*(arg1 + 0x70))
    int32_t i_1 = (divs.dp.q(sx.o(arg3), r9)).d
    int64_t i = sx.q(i_1)
    int32_t i_2 = i_1
    result = divs.dp.q(sx.o(arg4 - 1 + arg3), r9)
    
    for (int64_t r14_1 = sx.q(result.d); i s<= r14_1; i += 1)
        int64_t rdi_1 = *(arg1 + 0xd0)
        
        if (*(rdi_1 + (i << 3)) == 0)
            void* rax_6 = j_sub_140a82f30(0x38)
            void* const rcx_2 = rax_6
            
            if (rax_6 == 0)
                rcx_2 = nullptr
            else
                __builtin_memset(rax_6, 0, 0x30)
                *(rax_6 + 0x30) = 0xffffffff
                *(rax_6 + 0x34) = 0
                *(rax_6 + 0x36) = 0
            
            *(*(arg1 + 0xd0) + (i << 3)) = rcx_2
            result = *(arg1 + 0xd0)
            *(*(result + (i << 3)) + 0x30) = i_2
            rdi_1 = *(arg1 + 0xd0)
        
        int64_t* rdi_2 = *(rdi_1 + (i << 3))
        int32_t temp2_1 = *(rdi_2 + 0x2c)
        *(rdi_2 + 0x2c) -= 1
        
        if (temp2_1 == 1)
            int64_t* rcx_4 = *rdi_2
            int512_t zmm1
            
            if (rcx_4 != 0)
                if (*(rcx_4 + 0x63) == 0)
                    *(rcx_4 + 0x63) = 1
                    rcx_4[0xc].b = 1
                    
                    if (*(rcx_4 + 0x61) == 0)
                        result = (*(*rcx_4 + 0x10))()
                
                int64_t* rcx_5 = *rdi_2
                
                if (*(rcx_5 + 0x61) == 0)
                    zmm1.o = zx.o(0)
                    result = (*(*rcx_5 + 8))(rcx_5, zmm1)
                    rcx_5 = *rdi_2
                
                if (rcx_5 != 0)
                    result = (**rcx_5)(rcx_5, 1)
                
                *rdi_2 = 0
                *(arg1 + 0x148) -= 1
            
            *rdi_2 = 0
            int64_t* rcx_6 = rdi_2[3]
            rdi_2[3] = 0
            
            if (rcx_6 != 0)
                result = zx.q(rcx_6[9].d)
                rcx_6[9].d -= 1
                
                if (result.d == 1)
                    result, zmm1 = sub_140a2f6e0(rcx_6)
            
            int64_t rcx_7 = rdi_2[1]
            
            if (rcx_7 != 0)
                result, zmm1 = sub_140a74f90(rcx_7)
                rdi_2[1] = 0
            
            int64_t rcx_8 = rdi_2[2]
            rdi_2[4].d = 0
            
            if (rcx_8 != 0)
                result, zmm1 = sub_140a74f90(rcx_8)
                rdi_2[2] = 0
            
            rdi_2[5].d = 0
            *(rdi_2 + 0x34) = 0
        
        i_2 += 1

if (arg1 == -0x120)
    return result

return LeaveCriticalSection(arg1 + 0x120) __tailcall
