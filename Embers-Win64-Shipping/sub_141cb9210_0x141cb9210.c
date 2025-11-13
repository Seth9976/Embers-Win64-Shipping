// 函数: sub_141cb9210
// 地址: 0x141cb9210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r12 = arg2

if (arg4 != 0)
    int64_t* r15_1 = arg3 + 0x18
    int32_t i
    
    do
        int64_t* rcx = r12
        r12 = &r12[5]
        *rcx = r15_1[-3]
        rcx[1] = r15_1[-2]
        rcx[2] = r15_1[-1]
        
        if (&rcx[3] != r15_1)
            int32_t j_3 = rcx[4].d
            
            if (j_3 != 0)
                int64_t* rbx_2 = rcx[3] + 8
                int32_t j
                
                do
                    int64_t rcx_1 = *rbx_2
                    
                    if (rcx_1 != 0)
                        sub_140a74f90(rcx_1)
                    
                    rbx_2 = &rbx_2[3]
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            int32_t j_2 = r15_1[1].d
            int64_t* rbx_3 = *r15_1
            int32_t r8 = *(rcx + 0x24)
            rcx[4].d = j_2
            
            if (j_2 != 0 || r8 != 0)
                sub_140808f70(&rcx[3], j_2, r8)
                void* rdi_1 = rcx[3]
                
                if (j_2 != 0)
                    int32_t j_1
                    
                    do
                        *rdi_1 = *rbx_3
                        sub_140596d10(rdi_1 + 8, &rbx_3[1])
                        rdi_1 += 0x18
                        rbx_3 = &rbx_3[3]
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
            else
                *(rcx + 0x24) = 0
        
        r15_1 = &r15_1[5]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
