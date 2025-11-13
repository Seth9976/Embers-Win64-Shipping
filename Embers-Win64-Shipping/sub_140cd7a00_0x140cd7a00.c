// 函数: sub_140cd7a00
// 地址: 0x140cd7a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi
rsi.b = 1
TEB* gsbase

if (data_143e1b770 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1b770)
    
    if (data_143e1b770 == 0xffffffff)
        atexit(sub_142cc24d0)
        _Init_thread_footer(&data_143e1b770)

int64_t* r8 = data_143e1b760
int64_t rbx = sx.q(data_143e1b768)
int64_t* rdx = r8
void* rax_2 = &r8[rbx * 3]

if (r8 != rax_2)
    do
        if (*rdx == arg1 && rdx[1] == arg2 && rdx[2].d == arg3)
            return zx.q(rsi.b)
        
        rdx = &rdx[3]
    while (rdx != rax_2)

int32_t rax_3 = (rbx + 1).d
bool cond:0_1 = rax_3 s<= data_143e1b76c
data_143e1b768 = rax_3

if (not(cond:0_1))
    sub_140ac0d60(&data_143e1b760)
    r8 = data_143e1b760

int64_t rcx_1 = rbx * 3
*(r8 + (rcx_1 << 3)) = arg1.o
r8[rcx_1 + 2] = arg3.q
int64_t* i = *(arg1[2] + 0x70)

if (i == 0)
    rsi = zx.q((*(*arg1 + 0x178))(arg1, arg2))
else
    do
        if (rsi.b == 0)
            goto label_140cd7bd0
        
        uint64_t rax_6
        
        if (*(i + 0x3c) * i[7].d s<= 0)
            rax_6.b = 0
        else
            rax_6 = i[8]
            
            if (test_bit(rax_6, 0x1d) || test_bit(rax_6, 0xd) || (0x800000000000 & rax_6) != 0)
                rax_6.b = 0
            else
                int64_t rax_7 = sub_140d41340()
                
                if (sub_140cbd010(i) == rax_7)
                    rax_6.b = 0
                else
                    rax_6.b = 1
        
        if (test_bit(arg3, 0xb))
            rax_6.b = i[8].b & 1
        
        if (rax_6.b != 0)
            int32_t rbx_2 = 0
            
            if (i[7].d s> 0)
                while (rsi.b != 0)
                    int64_t rdx_2 = sx.q(*(i + 0x4c))
                    int32_t rax_9 = rbx_2 * *(i + 0x3c)
                    void* r8_2
                    
                    if (arg2 == 0)
                        r8_2 = nullptr
                    else
                        r8_2 = sx.q(rax_9) + arg2 + rdx_2
                    
                    rsi = zx.q(rsi.b)
                    
                    if ((*(*i + 0x80))(i, rdx_2 + sx.q(rax_9) + arg1, r8_2, zx.q(arg3), arg1, arg2, 
                            arg3) == 0)
                        rsi = 0
                    
                    rbx_2 += 1
                    
                    if (rbx_2 s>= i[7].d)
                        break
        
        i = i[0xb]
    while (i != 0)
    
    if (rsi.b != 0)
        rsi = zx.q((*(*arg1 + 0x178))(arg1, arg2))

label_140cd7bd0:
int32_t rax_19 = data_143e1b768

if (0 != 0)
    int64_t r10_2 = data_143e1b760
    memmove(r10_2 + sx.q(rax_19 - 1) * 0x18, r10_2 + sx.q(rax_19) * 0x18, 0)
    rax_19 = data_143e1b768

data_143e1b768 = rax_19 - 1
sub_140ce4d60(&data_143e1b760)
return zx.q(rsi.b)
