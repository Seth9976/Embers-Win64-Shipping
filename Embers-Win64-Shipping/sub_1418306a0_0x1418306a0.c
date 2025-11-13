// 函数: sub_1418306a0
// 地址: 0x1418306a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0xf8)
void* rbp_1 = sx.q(*(arg1 + 0x100)) * 0x138 + rbx
int64_t result

if (rbx == rbp_1)
label_141830733:
    result.b = 0
else
    while (true)
        if (*(rbx + 0x70) == 1)
            int64_t* rcx = *(rbx + 0x88)
            int64_t* rdi_1 = *(rbx + 0x78)
            int16_t** rax_1 = (*(*rcx + 0x130))(rcx)
            int64_t rdx_1 = *rdi_1
            int64_t* rax_2 = (*(rdx_1 + 0x130))(rdi_1, rdx_1)
            int16_t* rdx_2
            
            if (rax_1[1].d == 0)
                rdx_2 = &data_142d40450
            else
                rdx_2 = *rax_1
            
            int16_t* const rcx_2
            
            if (rax_2[1].d == 0)
                rcx_2 = &data_142d40450
            else
                rcx_2 = *rax_2
            
            if (sub_140a54510(rcx_2, rdx_2).d != 0)
                result.b = 1
                break
        
        rbx += 0x138
        
        if (rbx == rbp_1)
            goto label_141830733

return result
