// 函数: sub_142494150
// 地址: 0x142494150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r12 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 0xd0
    int32_t i
    
    do
        void* rsi_1 = r12
        r12 += 0xd8
        sub_141c213f0(rsi_1, &rbx_1[-0x1a])
        sub_141c212a0(rsi_1 + 0x58, &rbx_1[-0xf])
        *(rsi_1 + 0xa8) = rbx_1[-5]
        *(rsi_1 + 0xb0) = rbx_1[-4]
        
        if (rsi_1 + 0xb8 != &rbx_1[-3])
            int64_t rbp_1 = sx.q(rbx_1[-2].d)
            int64_t r15_1 = rbx_1[-3]
            int32_t r8 = *(rsi_1 + 0xc4)
            *(rsi_1 + 0xc0) = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_1407c35c0(rsi_1 + 0xb8, rbp_1.d, r8)
                memcpy(*(rsi_1 + 0xb8), r15_1, (rbp_1 << 6).d)
            else
                *(rsi_1 + 0xc4) = 0
        
        int64_t* rdi_2 = *rbx_1
        int64_t var_48 = rbx_1[-1]
        
        if (rdi_2 != 0)
            rdi_2[1].d += 1
        
        if (&var_48 != rsi_1 + 0xc8)
            var_48.o = *(rsi_1 + 0xc8)
            *(rsi_1 + 0xc8) = var_48.o
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp2_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
        
        rbx_1 = &rbx_1[0x1b]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
