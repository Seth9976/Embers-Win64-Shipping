// 函数: sub_140cf1f00
// 地址: 0x140cf1f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi
rsi.b = 1
TEB* gsbase

if (data_143e1b9c0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1b9c0)
    
    if (data_143e1b9c0 == 0xffffffff)
        atexit(sub_142cc25a0)
        _Init_thread_footer(&data_143e1b9c0)

int64_t* r8 = data_143e1b9b0
int64_t rbx = sx.q(data_143e1b9b8)
int64_t* rdx = r8
void* rax_2 = &r8[rbx * 3]

if (r8 != rax_2)
    do
        if (*rdx == arg1 && rdx[1] == arg2 && rdx[2].d == arg3)
            return zx.q(rsi.b)
        
        rdx = &rdx[3]
    while (rdx != rax_2)

int32_t rax_3 = (rbx + 1).d
bool cond:0_1 = rax_3 s<= data_143e1b9bc
data_143e1b9b8 = rax_3

if (not(cond:0_1))
    sub_140ac0d60(&data_143e1b9b0)
    r8 = data_143e1b9b0

int64_t rcx_1 = rbx * 3
*(r8 + (rcx_1 << 3)) = arg1.o
r8[rcx_1 + 2] = arg3.q
int64_t* i = *(arg1[2] + 0x70)

if (i == 0)
    rsi = zx.q((*(*arg1 + 0x178))(arg1, arg2))
else
    do
        if (rsi.b == 0)
            goto label_140cf20b0
        
        uint64_t rax_5
        
        if (sub_140cea010(i, 0).b == 0)
            rax_5.b = 0
        else
            int64_t rax_6 = sub_140d41340()
            
            if (sub_140cbd010(i) == rax_6)
                rax_5.b = 0
            else
                rax_5.b = 1
        
        if (test_bit(arg3, 0xb))
            rax_5.b = i[8].b & 1
        
        if (rax_5.b != 0)
            int32_t rbx_2 = 0
            
            if (i[7].d s> 0)
                while (rsi.b != 0)
                    int64_t rcx_4 = sx.q(*(i + 0x4c))
                    int32_t rax_8 = *(i + 0x3c) * rbx_2
                    int64_t r8_3
                    
                    if (arg2 == 0)
                        r8_3 = 0
                    else
                        r8_3 = sx.q(rax_8) + rcx_4 + arg2
                    
                    rsi = zx.q(rsi.b)
                    
                    if ((*(*i + 0x80))(i, sx.q(rax_8) + rcx_4 + arg1, r8_3, zx.q(arg3), arg1, arg2, 
                            arg3) == 0)
                        rsi = 0
                    
                    rbx_2 += 1
                    
                    if (rbx_2 s>= i[7].d)
                        break
        
        i = i[0xb]
    while (i != 0)
    
    if (rsi.b != 0)
        rsi = zx.q((*(*arg1 + 0x178))(arg1, arg2))

label_140cf20b0:
int32_t rax_16 = data_143e1b9b8

if (0 != 0)
    int64_t r10_2 = data_143e1b9b0
    memmove(r10_2 + sx.q(rax_16 - 1) * 0x18, r10_2 + sx.q(rax_16) * 0x18, 0)
    rax_16 = data_143e1b9b8

data_143e1b9b8 = rax_16 - 1
sub_140ce4d60(&data_143e1b9b0)
return zx.q(rsi.b)
