// 函数: sub_142c418e0
// 地址: 0x142c418e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(arg1 + 0x98)
uint64_t result = *r14

if (*(result + 0xc) == 1)
    int32_t rdi_1 = *(r14 + 0xc)
    int32_t arg_8 = rdi_1
    
    if (rdi_1 == 0xffffffff)
        int32_t r8 = *(result + 8)
        rdi_1 = 0
        
        if (r8 != 0)
            void* r10_1 = *(arg2 + 0x40)
            int64_t rdx = *(arg2 + 0x48)
            arg_8 = 0
            result = (*(r10_1 + 0x130))(arg2, rdx, r8, &arg_8, *(r10_1 + 0x20))
            
            if (result.d != 0)
                rdi_1 = arg_8
        
        *(r14 + 0xc) = rdi_1
    
    if (rdi_1 != 0)
        result = zx.q(*(arg3 + 0x60))
        void* rbp_1 = *(arg2 + 0x18)
        
        if (result.d != 0)
            char* rbx_2 = *(arg3 + 0x70) + 0x13
            uint64_t i_1 = zx.q(result.d)
            uint64_t i
            
            do
                if (*rbx_2 == 4)
                    result = sub_142c3ef20(r14, *(rbx_2 - 0x13), rdi_1, rbp_1)
                    *rbx_2 = result.b
                
                rbx_2 = &rbx_2[0x14]
                i = i_1
                i_1 -= 1
            while (i != 1)

return result
