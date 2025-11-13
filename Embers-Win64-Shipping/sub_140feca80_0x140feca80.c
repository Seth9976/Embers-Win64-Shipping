// 函数: sub_140feca80
// 地址: 0x140feca80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_1
void* entry_r8

if (data_143f01c92 == 0)
label_140fecab3:
    
    if (sub_140a80f40() != 0)
        goto label_140fecabe
    
label_140fecadb:
    
    if (arg2 != 0)
        rax_1 = 1
    else
        int32_t rsi_1 = data_143f029c8
        sub_140b34200("FlushRHIThreadTotal", rsi_1)
        int128_t entry_zmm2
        int128_t entry_zmm3
        
        if (data_143f02bac u> 0)
            j_sub_14196ef60(&data_143f02b88, &data_143f02b98, entry_zmm2, entry_zmm3)
        sub_14198b230()
        
        if (data_143f01c92 != 0)
            sub_14198b3f0()
        
        int64_t rdx_3
        rdx_3.b = 1
        sub_14198b7d0()
        sub_140b38680("FlushRHIThreadTotal", rsi_1)
        void* rdx_5 = entry_r8 + 0x68
        
        if (entry_r8 == 0)
            rdx_5 = nullptr
        
        sub_140fdf350(arg1, rdx_5, 0)
        rax_1 = 0
else
    rax_1 = sub_140a80f10()
    
    if (rax_1 == 0)
        if (data_143f01c92 != rax_1)
            goto label_140fecadb
        
        goto label_140fecab3
    
label_140fecabe:
    void* rdx_1 = entry_r8 + 0x68
    
    if (entry_r8 == 0)
        rdx_1 = nullptr
    
    sub_140fdf350(arg1, rdx_1, 0)
    rax_1 = 0

int32_t entry_r9
return sub_140feb6a0(entry_r8, entry_r9, 0, arg2, arg3, rax_1)
