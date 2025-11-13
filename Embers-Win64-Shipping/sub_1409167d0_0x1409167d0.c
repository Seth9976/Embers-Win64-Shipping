// 函数: sub_1409167d0
// 地址: 0x1409167d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* rbp = arg2

if (arg4 != 0)
    int64_t* r15_1 = arg3 + 0x10
    int32_t i
    
    do
        int64_t* r14_1 = rbp
        rbp = &rbp[4]
        
        if (r14_1 != &r15_1[-2])
            int64_t rbx_1 = sx.q(r15_1[-1].d)
            int64_t rdi_1 = r15_1[-2]
            int32_t r8 = *(r14_1 + 0xc)
            r14_1[1].d = rbx_1.d
            
            if (rbx_1.d != 0 || r8 != 0)
                sub_1405a4be0(r14_1, rbx_1.d, r8)
                memcpy(*r14_1, rdi_1, (rbx_1 << 4).d)
            else
                *(r14_1 + 0xc) = 0
        
        if (&r14_1[2] != r15_1)
            int32_t j_3 = r14_1[3].d
            int64_t* rbx_2 = r14_1[2]
            
            if (j_3 != 0)
                int32_t j
                
                do
                    sub_140745ac0(rbx_2)
                    rbx_2 = &rbx_2[2]
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            int32_t j_2 = r15_1[1].d
            void** rbx_3 = *r15_1
            int32_t r8_3 = *(r14_1 + 0x1c)
            r14_1[3].d = j_2
            
            if (j_2 != 0 || r8_3 != 0)
                sub_1405a4be0(&r14_1[2], j_2, r8_3)
                int64_t* rdi_2 = r14_1[2]
                
                if (j_2 != 0)
                    int32_t j_1
                    
                    do
                        *rdi_2 = 0
                        sub_140916520(rdi_2, *rbx_3, rbx_3[1].d, 0, 0)
                        rdi_2 = &rdi_2[2]
                        rbx_3 = &rbx_3[2]
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
            else
                *(r14_1 + 0x1c) = 0
        
        r15_1 = &r15_1[4]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
