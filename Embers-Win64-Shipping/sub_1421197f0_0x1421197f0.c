// 函数: sub_1421197f0
// 地址: 0x1421197f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = nullptr
int64_t* r9 = &arg1[2]
*arg1 = 0
arg1[1] = 0
r9[2] = 0
r9[3].d = 0
*(r9 + 0x1c) = 0x80
int64_t* rax = r9[2]

if (rax != 0)
    r9 = rax

*r9 = 0
r9[1] = 0
arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
arg1[8] = 0
arg1[9].d = 0
arg1[0xa] = 0
arg1[0xb] = 0
void* rcx = &arg1[0xc]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
uint64_t rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
*(rcx + 8) = 0
arg1[0x10].d = 0xffffffff
*(arg1 + 0x84) = 0
arg1[0x12] = 0
arg1[0x13].d = 0
arg1[0x14] = 0
arg1[0x15] = 0

if ((arg2.b & 4) == 0)
    rax_1.b = 0
else
    TEB* gsbase
    
    if (data_143cd80cc
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143cd80cc)
        
        if (data_143cd80cc == 0xffffffff)
            sub_140af2b60()
            data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
            _Init_thread_footer(&data_143cd80cc)
    
    if (data_143de5426 == 0)
        if (data_143cd80c8 != 0)
            rax_1.b = 0
        else
            rax_1.b = 1
    else if (data_143de5427 == 0 || data_143cd80c8 != 0)
        rax_1.b = 0
    else
        rax_1.b = 1

*(arg1 + 0xb4) = (arg2 u>> 1).b & 1
void arg_8

if ((arg2.b & 1) != 0)
    int64_t* rax_3 = j_sub_140a82f30(0x60)
    
    if (rax_3 != 0)
        rbx = sub_141ed2550(rax_3)
    
    if (&arg1[0x14] != &arg_8)
        int64_t* rsi_2 = arg1[0x14]
        arg1[0x14] = rbx
        
        if (rsi_2 != 0)
            sub_141ed41d0(rsi_2)
            j_sub_140a74f90(rsi_2)
    else if (rbx != 0)
        sub_141ed41d0(rbx)
        j_sub_140a74f90(rbx)
else if (rax_1.b != 0)
    int64_t* rax_5 = j_sub_140a82f30(0x60)
    
    if (rax_5 != 0)
        rbx = sub_141ed2300(rax_5)
    
    if (&arg1[0x15] != &arg_8)
        int64_t* rsi_3 = arg1[0x15]
        arg1[0x15] = rbx
        
        if (rsi_3 != 0)
            sub_141ed40e0(rsi_3)
            j_sub_140a74f90(rsi_3)
    else if (rbx != 0)
        sub_141ed40e0(rbx)
        j_sub_140a74f90(rbx)

if (*(arg1 + 0xb4) != 0)
    sub_1419a21e0(0)

arg1[0x16].d = arg3
return arg1
