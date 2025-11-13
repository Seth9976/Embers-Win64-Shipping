// 函数: sub_14203aea0
// 地址: 0x14203aea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
char result = 0
void* rcx = data_143f5b298
void* rcx_1

if (rcx != 0)
    rcx_1 = *(rcx + 0x788)

int64_t* rbx
int64_t rbp

if (rcx == 0 || rcx_1 == 0)
    rbx = 0.q
    rbp.b = 0
else
    rbx = *(rcx_1 + 0xd0)
    int64_t* rax = rbx
    
    if (rbx != 0)
        int32_t rax_1 = rbx[1].d
        
        if (rax_1 == 0)
            rbx = nullptr
            rax = nullptr
        else
            rbx[1].d = rax_1 + 1
            rax = rbx
    
    int64_t rdx_1 = 0
    
    if (rax != 0)
        rdx_1 = *(rcx_1 + 0xc8)
    
    result = 1
    
    if (rdx_1 == 0)
        rbp.b = 0
    else
        rbp = 1

if ((result & 1) != 0 && rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*rbx + 8))(rbx, 1)

if (rbp.b == 0)
    return result

void* rdx_2 = nullptr
void* rcx_4 = *(data_143f5b298 + 0x788)
int64_t* rbx_1 = *(rcx_4 + 0xd0)

if (rbx_1 != 0)
    int32_t rax_6 = rbx_1[1].d
    
    if (rax_6 == 0)
        rbx_1 = nullptr
    else
        rbx_1[1].d = rax_6 + 1
        
        if (rbx_1 != 0)
            rdx_2 = *(rcx_4 + 0xc8)

int64_t* rcx_5 = *(rdx_2 + 0x910)
int32_t rax_10 = sub_142007a80((*(*rcx_5 + 0x68))(rcx_5))

if (arg1[0x13].d != rax_10)
    if (rax_10 == 0)
        arg1[0x13].d = 0
    else if (rax_10 == 1)
        arg1[0x13].d = 1
    else
        arg1[0x13].d = 2
    
    sub_1420435c0(arg1)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int32_t rcx_10 = data_143a30330
int32_t rax_13 = data_143a30334

if (arg1[0x10].d != rcx_10 || *(arg1 + 0x84) != rax_13)
    arg1[0x10].d = rcx_10
    *(arg1 + 0x84) = rax_13
    sub_1420435c0(arg1)

TEB* gsbase

if (data_143f40788 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f40788)
    
    if (data_143f40788 == 0xffffffff)
        int64_t* rcx_20 = data_143db18d0
        
        if (rcx_20 == 0)
            sub_140a53c40()
            rcx_20 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_26 = (*(*rcx_20 + 0xb0))(rcx_20, u"r.VSync", r8_1)
        
        if (rax_26 != 0)
            int64_t rdx_4 = *rax_26
            rsi = (*(rdx_4 + 0x58))(rax_26, rdx_4)
        
        data_143f40780 = rsi
        _Init_thread_footer(&data_143f40788)

int32_t* rax_16
rax_16.b = *data_143f40780 != 0
arg1[5].b = rax_16.b
char rcx_14 = *(data_143f5b298 + 0xa71)
arg1[0x13].d = *(arg1 + 0x9c)
arg1[0x10].d = arg1[0x11].d
*(arg1 + 0x84) = *(arg1 + 0x8c)
arg1[0x17].d = *(arg1 + 0xc4)
int32_t rax_22 = arg1[0x19].d
*(arg1 + 0x29) = rcx_14
arg1[0x18].d = rax_22
void var_58
sub_14201ae40(&arg1[6], sub_1422e5800(&var_58))
int64_t var_18

if (var_18 != 0)
    sub_140a74f90(var_18)

int64_t var_28

if (var_28 != 0)
    sub_140a74f90(var_28)

arg1[0x15].d = *(arg1 + 0xac)
return sub_1420435c0(arg1)
