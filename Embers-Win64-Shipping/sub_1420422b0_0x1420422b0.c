// 函数: sub_1420422b0
// 地址: 0x1420422b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbx = 0
int64_t rax_1 = (*(*arg1 + 0x150))()
int32_t rax_2 = sub_1423dde30(data_143f5b298, rax_1)
int64_t* result = sub_141520bd0()
int64_t* result_1 = result
void* rdx_1 = result[0x23]

if (rdx_1 == 0)
    int64_t rdx_2 = *result
    result = (*(rdx_2 + 0x390))(result, rdx_2)
    rdx_1 = result_1[0x23]

if (*(rdx_1 + 0x50) != 0 && arg1[0x65].b == 0)
    if (rax_2 s< 0)
    label_14204237e:
        uint32_t rcx_6 = zx.d(*(rdx_1 + 0x53))
        
        if (rcx_6 == 0)
            rbx = 7
        else if (rcx_6 == 1)
            rbx = 8
        else if (rcx_6 == 2)
            rbx = (rcx_6 - 1).b + 8
    else if (rax_2 s> 1)
        if (rax_2 == 2)
            uint32_t rcx_5 = zx.d(*(rdx_1 + 0x51))
            
            if (rcx_5 == 0)
                rbx = 1
            else if (rcx_5 == 1)
                rbx = rcx_5.b + 1
        else
            if (rax_2 != 3)
                goto label_14204237e
            
            uint32_t rcx_2 = zx.d(*(rdx_1 + 0x52))
            
            if (rcx_2 == 0)
                rbx = 3
            else if (rcx_2 == 1)
                rbx = 4
            else if (rcx_2 == 2)
                rbx = 5
            else if (rcx_2 == 3)
                rbx = rax_2.b + 3

arg1[0xe].b = rbx
return result
