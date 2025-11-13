// 函数: sub_140bc2800
// 地址: 0x140bc2800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143e1a8a0)
int64_t rbx_1 = *arg1
int64_t* rbx_2

if (data_1439a98b8 == data_1439a98e4)
labelid_7:
    rbx_2 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
    void* rcx_1 = data_1439a98f0
    void* rax_4 = &data_1439a98e8
    
    if (rcx_1 != 0)
        rax_4 = rcx_1
    
    int32_t rax_5 = *(rax_4 + (((sx.q(data_1439a98f8) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_140bc2897:
        rbx_2 = nullptr
    else
        int64_t r8_1 = data_1439a98b0
        int64_t rdx_3
        
        while (true)
            rdx_3 = sx.q(rax_5)
            int64_t rcx_2 = rdx_3 * 3
            
            if (*(r8_1 + (rcx_2 << 3)) == rbx_1)
                break
            
            rax_5 = *(r8_1 + (rcx_2 << 3) + 0x10)
            
            if (rax_5 == 0xffffffff)
                goto label_140bc2897_2
        
        if (rax_5 == 0xffffffff)
        label_140bc2897_1:
            rbx_2 = nullptr
        else
            void* rbx_3 = r8_1 + rdx_3 * 0x18
            
            if (rbx_3 == 0)
            label_140bc2897_2:
                rbx_2 = nullptr
            else
                rbx_2 = *(rbx_3 + 8)

int64_t rdi = sx.q(rbx_2[1].d)
int32_t rax_6 = (rdi + 1).d
rbx_2[1].d = rax_6

if (rax_6 s> *(rbx_2 + 0xc))
    sub_1405a4f90(rbx_2)

int64_t* rdx_7 = (rdi << 4) + *rbx_2
*rdx_7 = *arg2
void* rax_8 = arg2[1]
rdx_7[1] = rax_8

if (rax_8 != 0)
    *(rax_8 + 8) += 1

return LeaveCriticalSection(&data_143e1a8a0) __tailcall
