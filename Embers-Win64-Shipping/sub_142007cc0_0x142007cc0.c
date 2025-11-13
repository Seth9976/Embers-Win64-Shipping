// 函数: sub_142007cc0
// 地址: 0x142007cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_140b73b20(0)
int16_t* const rdi = &data_142d40450
int16_t* rdx

if (arg2[3].d == 0)
    rdx = &data_142d40450
else
    rdx = arg2[2]

int128_t* rax_5
int16_t* rdx_3

if (sub_140a54510(rax, rdx) == 0)
label_142007d5e:
    void* rbx_1 = data_143f5b298
    
    if (rbx_1 != 0)
        int64_t rdi_1 = sx.q(*(rbx_1 + 0x798))
        int32_t rax_6 = (rdi_1 + 1).d
        *(rbx_1 + 0x798) = rax_6
        
        if (rax_6 s> *(rbx_1 + 0x79c))
            sub_1405a4f90(rbx_1 + 0x790)
        
        return sub_140596d10((rdi_1 << 4) + *(rbx_1 + 0x790), arg2)
    
    int64_t* rcx_7 = *arg3
    rax_5 = (*(*rcx_7 + 0x48))(rcx_7)
    rdx_3 = u"The command could not be executed because the Engine has not started up yet."
else
    int16_t* rdx_1
    
    if (arg2[3].d == 0)
        rdx_1 = &data_142d40450
    else
        rdx_1 = arg2[2]
    
    if (data_143de54e8 != 0)
        rdi = data_143de54e0
    
    if (sub_140a54510(rdi, rdx_1) == 0)
        goto label_142007d5e
    
    if (sub_1405a71a0(&data_143de5500, &arg2[2]) != 0)
        goto label_142007d5e
    
    int64_t* rcx_2 = *arg3
    rax_5 = (*(*rcx_2 + 0x48))(rcx_2)
    rdx_3 = u"You are not authorized to execute console commands."

return sub_14200e900(arg1, rdx_3, rax_5)
