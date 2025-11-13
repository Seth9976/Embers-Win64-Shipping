// 函数: sub_140cacb10
// 地址: 0x140cacb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8

if ((arg1[5].b & 1) == 0)
    void* rax_10 = *arg2
    int64_t rcx_9
    
    if (rax_10 == 0)
        arg_8 = 0
        rcx_9 = 0
    else
        rcx_9 = **(rax_10 + 8)
    
    int64_t rax_12 = *arg1
    arg_8 = rcx_9
    int64_t rax_13 = (*(rax_12 + 0x140))(arg1, &arg_8)
    int64_t* rcx_11 = *arg2
    
    if (rcx_11 == 0)
        return rax_13
    
    return (*(*rcx_11 + 8))(rcx_11, arg1)

int64_t rax = *arg1
arg_8 = 0
(*(rax + 0x140))(arg1, &arg_8)
int32_t rcx
rcx.b = sub_140b5b8a0(arg_8.d, 0) == 0
bool rax_1 = arg_8:4.d != 0 | rcx.b

if (rax_1 == 0)
    *arg2 = 0
    return rax_1

int64_t rbx = arg_8
int64_t arg_20 = 0
sub_140cbcdf0()
void* const rcx_5

if (data_143e1b278.d == data_143e1b2a4)
label_140cacbe0:
    rcx_5 = nullptr
else
    int32_t rax_3 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8 = &data_143e1b2a8
    void* rcx_3 = data_143e1b2b0
    
    if (rcx_3 != 0)
        r8 = rcx_3
    
    int32_t rax_5 = *(r8 + (((sx.q(data_143e1b2b8) - 1) & sx.q(rax_3)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_140cacbe0_1:
        rcx_5 = nullptr
    else
        int64_t r8_1 = data_143e1b270
        
        while (true)
            int64_t rdx_4 = sx.q(rax_5) * 3
            rcx_5 = r8_1 + (rdx_4 << 3)
            
            if (*(r8_1 + (rdx_4 << 3)) == rbx)
                break
            
            rax_5 = *(rcx_5 + 0x10)
            
            if (rax_5 == 0xffffffff)
                goto label_140cacbe0_2
        
        if (rax_5 == 0xffffffff)
        label_140cacbe0_2:
            rcx_5 = nullptr

void* rax_6 = rcx_5 + 8

if (rcx_5 == 0)
    rax_6 = nullptr

int64_t r9 = *rax_6
int64_t* rax_7 = (*(r9 + 0x30))(arg3, &arg_20, 0, r9, rbx)
int64_t* r8_2 = rax_7

if (rax_7 == 0 || ((zx.q(*(rax_7[1] + 0x10)) u>> 0x18).b & 1) == 0)
    r8_2 = nullptr

*arg2 = r8_2
return (*(*r8_2 + 8))(r8_2, arg1)
