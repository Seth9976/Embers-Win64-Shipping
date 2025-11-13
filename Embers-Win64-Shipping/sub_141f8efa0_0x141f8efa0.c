// 函数: sub_141f8efa0
// 地址: 0x141f8efa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *(arg1 + 0x28)
int64_t* r14_1

if (r14 != 0)
    r14_1 = *(r14 + 0x58)

void* const rdi_1

if (r14 == 0 || r14_1 == 0)
    r14_1 = nullptr
    rdi_1 = nullptr
else
    rdi_1 = r14_1[0x28]
    
    if (rdi_1 == 0)
        rdi_1 = nullptr

void* rax = sub_1423de4b0(data_143f5b298, rdi_1)

if (rax != 0)
    int64_t* i = *(rax + 0x220)
    
    for (void* rbp_3 = &i[sx.q(*(rax + 0x228)) * 2]; i != rbp_3; i = &i[2])
        int64_t* rcx_1 = *i
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x3f8))(rcx_1, arg1, arg2)

int64_t* rcx_2 = *(arg1 + 0x70)
int64_t* result = (*(*rcx_2 + 0x3d8))(rcx_2, arg3, *(arg1 + 0x28))

if (r14_1 != 0)
    result = (*(*r14_1 + 0x368))(r14_1)
    
    if (result.b == 0)
        result = *(arg1 + 0x70)
        
        if (*(result + 0xf1) u> 1)
            *(result + 0xf1) = 1
            int64_t* rbx_1
            
            if (rdi_1 != 0)
                rbx_1 = *(rdi_1 + 0xf0)
            
            if (rdi_1 == 0 || rbx_1 == 0)
                rbx_1 = nullptr
            
            if (rdi_1 != 0)
                result = sub_14243aea0(rdi_1)
                
                if (result.b != 0 && rbx_1 != 0)
                    sub_142167460(rbx_1[0xde], *(arg1 + 0x70), rbx_1, nullptr)
                    result = sub_142167b90(rbx_1, *(arg1 + 0x70))
                    
                    if (rbx_1[0x13].d s> 0)
                        result = rbx_1[0x12]
                        void* rdi_2 = *result
                        
                        if (rdi_2 != 0)
                            sub_14216de20(rbx_1[0xde], *(arg1 + 0x70), rdi_2, rbx_1)
                            return sub_1421620b0(rbx_1[0xde], *(arg1 + 0x70), rdi_2, rbx_1)

return result
