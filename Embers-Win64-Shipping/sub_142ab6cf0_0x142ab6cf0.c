// 函数: sub_142ab6cf0
// 地址: 0x142ab6cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_20 = -2
int32_t var_28 = 0
int32_t arg_18 = 0
int64_t* rax = j_sub_142a7dd00(0x60)
int64_t* arg_20 = rax
int64_t* rbx

if (rax == 0)
    rbx = nullptr
else
    rbx = sub_142ab5870(rax)

arg_20 = rbx
int32_t rax_2 = arg_18

if (rbx == 0)
    if (rax_2 s<= 0)
        rax_2 = 7
    
    arg_18 = rax_2

if (rax_2 s<= 0)
    sub_142ab5d20(rbx, arg2, &arg_18)
    rax_2 = arg_18
    
    if (rax_2 s> 0)
        goto label_142ab6d60
    
    arg_20 = nullptr
    sub_142ab6ad0(arg1, 0, rbx)
else
label_142ab6d60:
    arg1[4] = rax_2
    *(arg1 + 8) = 0
    *arg1 = 0
    
    if (rbx != 0)
        if (*(rbx + 0xc) != 0)
            sub_142a7dcd0(*rbx)
        
        sub_142a47920(rbx)

return arg1
