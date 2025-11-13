// 函数: sub_14249ca80
// 地址: 0x14249ca80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r13 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 0x48
    int32_t i
    
    do
        int64_t* r14_1 = r13
        r13 = &r13[0x16]
        *r14_1 = rbx_1[-9]
        r14_1[1] = rbx_1[-8]
        r14_1[2] = rbx_1[-7]
        r14_1[3].d = rbx_1[-6].d
        *(r14_1 + 0x1c) = *(rbx_1 - 0x2c)
        *(r14_1 + 0x24) = *(rbx_1 - 0x24)
        r14_1[5] = rbx_1[-4]
        r14_1[6].d = rbx_1[-3].d
        r14_1[7] = rbx_1[-2]
        int64_t* rdi_1 = *rbx_1
        int64_t var_48 = rbx_1[-1]
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        if (&var_48 != &r14_1[8])
            var_48.o = *(r14_1 + 0x40)
            *(r14_1 + 0x40) = var_48.o
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp1_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        if (&r14_1[0xa] != &rbx_1[1])
            int64_t rsi_1 = sx.q(rbx_1[0xa].d)
            void* rdi_2 = &r14_1[0x11]
            sub_1405a4aa0(rdi_2, 0, rsi_1.d, 4)
            void* rax_9 = rbx_1[9]
            void* rdx = &rbx_1[8]
            void* r9 = *(rdi_2 + 8)
            
            if (rax_9 != 0)
                rdx = rax_9
            
            if (r9 != 0)
                rdi_2 = r9
            
            memcpy(rdi_2, rdx, (rsi_1 << 2).d)
            r14_1[0x13].d = rsi_1.d
            sub_14249c450(&r14_1[0xa], &rbx_1[1])
        
        if (&r14_1[0x14] != &rbx_1[0xb])
            int64_t rsi_2 = sx.q(rbx_1[0xc].d)
            int64_t rbp_2 = rbx_1[0xb]
            int32_t r8_3 = *(r14_1 + 0xac)
            r14_1[0x15].d = rsi_2.d
            
            if (rsi_2.d != 0 || r8_3 != 0)
                sub_1405c4a00(&r14_1[0x14], rsi_2.d, r8_3)
                memcpy(r14_1[0x14], rbp_2, (rsi_2 << 3).d)
            else
                *(r14_1 + 0xac) = rsi_2.d
        
        rbx_1 = &rbx_1[0x16]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* result
result.b = 1
return result
