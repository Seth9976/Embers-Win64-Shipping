// 函数: sub_1420e7960
// 地址: 0x1420e7960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
int64_t rbx = *(sub_140d21d80(arg1) + 0x18)
int32_t arg_8

if (data_143a2e448 == data_143a2e474)
label_1420e79e7:
    arg_8 = 0xffffffff
    int32_t arg_c = 0
else
    int32_t rax_3 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8_1 = data_143a2e480
    void* rax_5 = &data_143a2e478
    
    if (r8_1 != 0)
        rax_5 = r8_1
    
    int32_t rax_6 = *(rax_5 + ((sx.q(data_143a2e488 - 1) & sx.q(rax_3)) << 2))
    
    if (rax_6 == 0xffffffff)
        goto label_1420e79e7
    
    int64_t r8_2 = data_143a2e440
    int64_t rdx_3
    
    while (true)
        rdx_3 = sx.q(rax_6)
        int64_t rcx_4 = rdx_3 * 3
        
        if (*(r8_2 + (rcx_4 << 3)) == rbx)
            break
        
        rax_6 = *(r8_2 + (rcx_4 << 3) + 0x10)
        
        if (rax_6 == 0xffffffff)
            goto label_1420e79e7
    
    if (rax_6 == 0xffffffff)
        goto label_1420e79e7
    
    void* rax_10 = r8_2 + rdx_3 * 0x18
    
    if (rax_10 == 0)
        goto label_1420e79e7
    
    arg_8.q = *(rax_10 + 8)

int64_t rax_7 = sub_140d3c6e0(&arg_8)
arg1[0x17] = rax_7

if (rax_7 != 0)
    sub_140943590(&data_143a2e440, *(sub_140d21d80(arg1) + 0x18))
else
    arg1[0x17] = arg1[4]

sub_14244ea30(arg1)

if (arg1[0x48] == 0)
    void* const rbx_1 = *arg1[0x13]
    void* rax_14
    int64_t rax_15
    void* rdx_5
    
    if (rbx_1 != 0)
        rax_14 = sub_1425bd0d0()
        rdx_5 = *(rbx_1 + 0x10)
        rax_15 = sx.q(*(rax_14 + 0x38))
    
    if (rbx_1 == 0 || rax_15.d s> *(rdx_5 + 0x38)
            || *(*(rdx_5 + 0x30) + (rax_15 << 3)) != rax_14 + 0x30)
        rbx_1 = nullptr
    
    arg1[0x48] = rbx_1

void* result = arg1[0x18]

if (result == 0 || *(result + 0x21c) == 0)
    arg1[0x24].d = 0
    
    if (*(arg1 + 0x124) != 0)
        return sub_140638cc0(&arg1[0x23], 0)

return result
