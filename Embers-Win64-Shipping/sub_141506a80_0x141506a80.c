// 函数: sub_141506a80
// 地址: 0x141506a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = arg3

if (*(arg1 + 0x80) != 0)
    sub_141500d90(arg1)

TEB* gsbase

if (data_143ef1da0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ef1da0)
    
    if (data_143ef1da0 == 0xffffffff)
        atexit(sub_142ce8ff0)
        _Init_thread_footer(&data_143ef1da0)

int32_t rax_2 = data_143ef1d9c
data_143ef1d98 = 0

if (rax_2 s< 0 && rax_2 != 0)
    sub_1405c5570(&data_143ef1d90, 0)

uint32_t rbp = zx.d(arg3:7.b)
int64_t* rdi_2 = (zx.q(rbp) << 4) + arg4
int64_t rsi = sx.q(rdi_2[1].d)
int32_t rax_3 = (rsi + 1).d
rdi_2[1].d = rax_3

if (rax_3 s> *(rdi_2 + 0xc))
    sub_1405a4d70(rdi_2)

*(*rdi_2 + (rsi << 3)) = rbx
int64_t rdi_3 = sx.q(data_143ef1d98)
int32_t rax_5 = (rdi_3 + 1).d
bool cond:2 = rax_5 s<= data_143ef1d9c
data_143ef1d98 = rax_5

if (not(cond:2))
    sub_1405a4d70(&data_143ef1d90)

uint32_t i_1 = zx.d(rbp.b)
uint32_t i_2 = i_1
uint32_t i = i_1
*(data_143ef1d90 + (rdi_3 << 3)) = rbx
int32_t r13 = *(arg1 + 0x68)

if (rbp.b != 0)
    int32_t* r14_2 = arg4 + 8 + (zx.q(i_1) << 4)
    
    do
        r14_2 = &r14_2[-4]
        i -= 1
        uint32_t rsi_1 = zx.d(i.b)
        uint64_t rax_9 = sub_141505c20(arg1, 0, r13, rsi_1 << 0x18 | rbx.d, 
            0xffffffff << (i_1.b * (*(arg1 + 4)).b))
        
        if (rax_9 != 0)
            r13 = rax_9.d
            uint32_t rbp_2 = (rax_9 u>> 0x20).d
            int32_t rdi_4 = r13
            
            if (r13 u< rbp_2)
                char var_62_1 = rsi_1.b
                char var_61_1 = rsi_1.b
                
                do
                    int64_t rsi_2 = sx.q(data_143ef1d98)
                    int64_t rdx_3 = sx.q(rdi_4) << 2
                    int64_t rax_12 = *(arg1 + 0x70)
                    int32_t rcx_4 = *(rdx_3 + *(arg1 + 0x60)) & 0xffffff
                    uint32_t r8_3 = zx.d(*(rdx_3 + rax_12 + 2))
                    int32_t rcx_6 = *(*(*(arg2 + 0x88) + (zx.q(*(rdx_3 + rax_12)) << 3)) + 0x1b8)
                    uint32_t temp1_1 = modu.dp.d(0:r8_3, rcx_6)
                    uint8_t arg_9 = (divu.dp.d(0:r8_3, rcx_6)).b
                    int16_t var_64_1 = temp1_1.b.w
                    int32_t rax_17 = (rsi_2 + 1).d
                    bool cond:3_1 = rax_17 s<= data_143ef1d9c
                    uint32_t var_60_1 = temp1_1
                    data_143ef1d98 = rax_17
                    
                    if (not(cond:3_1))
                        sub_1405a4d70(&data_143ef1d90)
                    
                    rdi_4 += 1
                    *(data_143ef1d90 + (rsi_2 << 3)) = rcx_4.q
                while (rdi_4 u< rbp_2)
                
                rbx = arg3
        
        int64_t rdi_5 = sx.q(data_143ef1d98)
        
        if (rdi_5.d != 0)
            int32_t rax_19 = *r14_2
            int32_t rdx_8 = rdi_5.d + rax_19
            
            if (rdx_8 s> r14_2[1])
                sub_1405c5570(&r14_2[-2], rdx_8)
                rax_19 = *r14_2
            
            memcpy(*(r14_2 - 8) + (sx.q(rax_19) << 3), data_143ef1d90, (rdi_5 << 3).d)
            *r14_2 += rdi_5.d
        
        i_1 = i_2
    while (i != 0)

return sub_14150e9d0(arg1) __tailcall
