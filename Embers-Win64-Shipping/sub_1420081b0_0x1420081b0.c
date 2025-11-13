// 函数: sub_1420081b0
// 地址: 0x1420081b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_140b73b20(0)
int16_t* const rdi = &data_142d40450
int16_t* rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

int128_t* rax_5
wchar16 const* const rdx_3

if (sub_140a54510(rax, rdx) == 0)
label_14200824a:
    
    if (data_143f5b298 != 0)
        bool cond:1_1 = sub_1405949a0() == 0
        int64_t rbx_1 = *(data_143f5b298 + 0x28)
        
        if (cond:1_1)
            sub_140b19e60()
            return (*(rbx_1 + 8))(data_143f5b298 + 0x28, 0, u"QUIT", &data_1439a8bd0)
        
        sub_140b19e60()
        return (*(rbx_1 + 8))(data_143f5b298 + 0x28, 0, u"QUIT_EDITOR", &data_1439a8bd0)
    
    int64_t* rcx_8 = *arg3
    rax_5 = (*(*rcx_8 + 0x48))(rcx_8)
    rdx_3 = u"Termination failed because the Engine has not started up yet or is unav"
else
    int16_t* rdx_1
    
    if (arg2[1].d == 0)
        rdx_1 = &data_142d40450
    else
        rdx_1 = *arg2
    
    if (data_143de54e8 != 0)
        rdi = data_143de54e0
    
    if (sub_140a54510(rdi, rdx_1) == 0)
        goto label_14200824a
    
    if (sub_1405a71a0(&data_143de5500, arg2) != 0)
        goto label_14200824a
    
    int64_t* rcx_2 = *arg3
    rax_5 = (*(*rcx_2 + 0x48))(rcx_2)
    rdx_3 = u"You are not authorized to terminate this instance."

return sub_14200e900(arg1, rdx_3, rax_5)
