// 函数: sub_1426b8f60
// 地址: 0x1426b8f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = arg1[0x4a]
sub_141f8fc40(arg1)
int64_t* rcx = arg1[0x5b]

if (rcx != 0)
    (*(*rcx + 0x3f0))(rcx)

if ((arg1[0x5a].b & 2) != 0)
    int64_t* rcx_1 = arg1[0x5c]
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x408))(rcx_1)

void* result = arg1[0x60]

if (result != 0 && *(result + 0xa0) == rbx)
    wchar16* i_1 = nullptr
    
    for (wchar16* i = wcsstr(&AAIController::OnGameplayTaskResourcesClaimed", ::"); i != 0; 
            i = wcsstr(&i[1], ::"))
        i_1 = i
    
    int64_t arg_8
    sub_140b58260(&arg_8, &i_1[2], 1)
    int64_t rbx_1 = arg_8
    int64_t* r14_2 = arg1[0x60] + 0x110
    int32_t* r15_1 = *r14_2
    int32_t* rdi_1 = r15_1
    void* rbp_3 = &r15_1[sx.q(r14_2[1].d) * 4]
    
    if (r15_1 != rbp_3)
        do
            if (*(rdi_1 + 8) == rbx_1 && arg1 == sub_140d3cab0(rdi_1))
                int32_t rdi_3 = ((rdi_1 - r15_1) s>> 4).d
                
                if (rdi_3 != 0xffffffff)
                    int32_t rdx_2 = r14_2[1].d
                    int32_t rcx_7 = rdx_2 - rdi_3 - 1
                    
                    if (rcx_7 s>= 1)
                        rcx_7 = 1
                    
                    if (rcx_7 != 0)
                        memcpy((sx.q(rdi_3) << 4) + *r14_2, (sx.q(rdx_2 - rcx_7) << 4) + *r14_2, 
                            rcx_7 << 4)
                        rdx_2 = r14_2[1].d
                    
                    r14_2[1].d = rdx_2 - 1
                
                break
            
            rdi_1 = &rdi_1[4]
        while (rdi_1 != rbp_3)
    
    result = sub_1408f4c10(r14_2)
    arg1[0x60] = 0

return result
