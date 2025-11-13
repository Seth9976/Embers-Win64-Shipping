// 函数: sub_1421df910
// 地址: 0x1421df910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(arg1 + 0x80)
sub_140d21f60()

if (rbx != 0)
    int32_t i = 0
    
    if (data_1439aad50 s> 0)
        int64_t r14_1 = 0
        
        do
            int64_t* rdi_2 = data_1439aad48 + r14_1
            
            if (rdi_2[1].d != 0)
                int64_t* rcx = *rdi_2
                void arg_8
                
                if (rcx != 0 && *(*(*rcx + 0x30))(rcx, &arg_8) == rbx)
                    if (rdi_2[1].d != 0)
                        int64_t* rcx_1 = *rdi_2
                        
                        if (rcx_1 != 0)
                            (*(*rcx_1 + 0x38))(rcx_1, 0)
                            int64_t rcx_2 = *rdi_2
                            
                            if (rcx_2 != 0)
                                *rdi_2 = sub_140a84c80(rcx_2, 0, 0)
                            
                            rdi_2[1].d = 0
                    
                    sub_140599630(&data_1439aad48, 0)
                    break
            
            i += 1
            r14_1 += 0x10
        while (i s< data_1439aad50)

int64_t r8 = 0
void** rdx_2 = *(arg1 + 0x68)
uint64_t result = &rdx_2[sx.q(*(arg1 + 0x70))]
uint64_t r9_1 = sx.q(*(arg1 + 0x70)) << 3 u>> 3

if (rdx_2 u> result)
    r9_1 = 0

if (r9_1 != 0)
    do
        void* rcx_3 = *rdx_2
        
        if (rcx_3 != 0)
            result = (zx.q(*(rcx_3 + 0x438)) & 0xbfffffff) | 0x3fffffff
            *(rcx_3 + 0x438) = result.d
        
        rdx_2 = &rdx_2[1]
        r8 += 1
    while (r8 != r9_1)

*(arg1 + 0x70) = 0

if (*(arg1 + 0x74) s<= 0xffffffff)
    result = sub_1405c5570(arg1 + 0x68, 0)

int32_t rbx_1 = *(arg1 + 0x30)
int32_t rbx_2 = rbx_1 - 1

if (rbx_1 - 1 s>= 0)
    int32_t temp1_1
    
    do
        result = sub_1421f9180(arg1, rbx_2)
        temp1_1 = rbx_2
        rbx_2 -= 1
    while (temp1_1 - 1 s>= 0)

*(arg1 + 0x10) = 0
return result
