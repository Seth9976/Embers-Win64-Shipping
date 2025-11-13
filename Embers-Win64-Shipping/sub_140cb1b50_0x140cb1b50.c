// 函数: sub_140cb1b50
// 地址: 0x140cb1b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg1
sub_140cbcdf0()
void* const rcx_4

if (data_143e1b278.d == data_143e1b2a4)
labelid_4:
    rcx_4 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8 = &data_143e1b2a8
    void* rcx_2 = data_143e1b2b0
    
    if (rcx_2 != 0)
        r8 = rcx_2
    
    int32_t rax_4 = *(r8 + (((sx.q(data_143e1b2b8) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_140cb1be0:
        rcx_4 = nullptr
    else
        int64_t r8_1 = data_143e1b270
        
        while (true)
            int64_t rdx_3 = sx.q(rax_4) * 3
            rcx_4 = r8_1 + (rdx_3 << 3)
            
            if (*(r8_1 + (rdx_3 << 3)) == rbx)
                break
            
            rax_4 = *(rcx_4 + 0x10)
            
            if (rax_4 == 0xffffffff)
                goto label_140cb1be0_1
        
        if (rax_4 == 0xffffffff)
        label_140cb1be0_1:
            rcx_4 = nullptr

void* rax_5 = rcx_4 + 8

if (rcx_4 == 0)
    rax_5 = nullptr

jump(*(*rax_5 + 0x30))
