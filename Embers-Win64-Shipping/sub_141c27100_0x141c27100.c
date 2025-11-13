// 函数: sub_141c27100
// 地址: 0x141c27100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_141c27b40()
int64_t* result_1 = result
void* rbp = result[0x23]

if (rbp == 0)
    int64_t r9_1 = *result
    int512_t entry_zmm1
    int512_t entry_zmm2
    result = (*(r9_1 + 0x390))(result, entry_zmm1, entry_zmm2, r9_1)
    rbp = result_1[0x23]

int64_t r15 = sx.q(*(rbp + 0x858))

if (r15 s> 0)
    int64_t rbx = 0
    int64_t rsi_1 = 0
    
    do
        void* rdi_2 = *(rbp + 0x850) + rsi_1
        int64_t* entry_rdx
        int16_t* rdx
        
        if (entry_rdx[1].d == 0)
            rdx = &data_142d40450
        else
            rdx = *entry_rdx
        
        int16_t* const rcx_2
        
        if (*(rdi_2 + 8) == 0)
            rcx_2 = &data_142d40450
        else
            rcx_2 = *rdi_2
        
        result = sub_140a54510(rcx_2, rdx)
        
        if (result.d == 0)
            int64_t* entry_r8
            *entry_r8 = *(rdi_2 + 0x10)
            result = zx.q(*(rdi_2 + 0x18))
            entry_r8[1].d = result.d
            break
        
        rbx += 1
        rsi_1 += 0x20
    while (rbx s< r15)

return result
