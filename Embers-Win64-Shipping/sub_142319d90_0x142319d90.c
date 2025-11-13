// 函数: sub_142319d90
// 地址: 0x142319d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
int64_t* rdi = arg1[0x5f]
int64_t rsi = 0
uint64_t r14_1 = sx.q(arg1[0x60].d) << 3 u>> 3

if (rdi u> &rdi[arg1[0x60]])
    r14_1 = 0

if (r14_1 != 0)
    do
        sub_140cd85e0(*rdi)
        rsi += 1
        rdi = &rdi[1]
    while (rsi != r14_1)

sub_142317af0(arg1)
TEB* gsbase

if (data_143cd80cc s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        _Init_thread_footer(&data_143cd80cc)

if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
    uint64_t* rdi_1 = arg1[0xb]
    
    if (rdi_1 != 0)
        sub_14233cf30(rdi_1, *(arg1 + 0x13f) u>> 3 & 1, &arg1[0x2d], arg1)
    
    char rdx_2 = *(arg1 + 0x3d)
    uint64_t rax_3
    
    if ((rdx_2 & 2) != 0 || arg1[0x1c].d s<= 1 || rdi_1 == 0 || (*(**rdi_1 + 0x408) & 1) != 0)
        rax_3.b = 0
    else
        rax_3.b = 8
    
    *(arg1 + 0x3d) = (rdx_2 & 0xf7) | rax_3.b
    
    if (sub_140d23dc0(arg1, 0x30) == 0 && *(arg1 + 0x34) != 0xffffffff)
        int64_t* rax_6 = sub_140963350(sub_141f88540())
        int64_t r8_2 = *rax_6
        (*(r8_2 + 0xd0))(rax_6, arg1, r8_2)
    
    if ((*(arg1 + 0x3d) & 8) != 0)
        if (sub_140d23dc0(arg1, 0x30) != 0)
            *(arg1 + 0x34) = 0xffffffff
        else if (sub_141f8dc00(sub_141f88540()) == 0)
            *(arg1 + 0x34) = 0xffffffff
        else if (sub_1423b27f0(arg1) == 0)
            *(arg1 + 0x34) = 0xffffffff
        else
            int64_t* rax_12 = sub_140963350(sub_141f88540())
            int64_t r8_3 = *rax_12
            (*(r8_3 + 0xb8))(rax_12, arg1, r8_3)

sub_14230ab20(arg1)
sub_14230a990(arg1)
int128_t var_18 = data_143a2fec8
uint64_t rax_13 = sub_140cdd5d0(arg1, &var_18)

if (rax_13.d s< 9)
    int64_t rsi_1 = 0
    int64_t* rdi_2 = arg1[0x5f]
    uint64_t r14_3 = sx.q(arg1[0x60].d) << 3 u>> 3
    
    if (rdi_2 u> &rdi_2[arg1[0x60]])
        r14_3 = 0
    
    if (r14_3 != 0)
        do
            int64_t* rcx_17 = *rdi_2
            
            if (rcx_17 != 0)
                (*(*rcx_17 + 0x280))(rcx_17)
            
            rdi_2 = &rdi_2[1]
            rsi_1 += 1
        while (rsi_1 != r14_3)

uint64_t* rcx_18 = arg1[0xb]
int64_t rcx_20

if (rcx_18 != 0)
    rax_13 = *rcx_18
    rcx_20 = rax_13 + (sx.q(rcx_18[1].d) << 3)

if (rcx_18 == 0 || rax_13 == rcx_20)
label_14231a019:
    rax_13.b = 0
else
    while (true)
        int64_t* rdx_6 = *rax_13
        int64_t r9_2 = 0
        int64_t r8_4 = sx.q(rdx_6[1].d)
        
        if (r8_4.d s> 0)
            void* rdx_8 = *rdx_6 + 0x4c
            
            while ((*(rdx_8 - 8) | *(rdx_8 - 4) | *(rdx_8 + 4) | *rdx_8) == 0)
                r9_2 += 1
                rdx_8 += 0xe8
                
                if (r9_2 s>= r8_4)
                    goto label_14231a010
            
            rax_13.b = 0x10
            break
        
    label_14231a010:
        rax_13 += 8
        
        if (rax_13 == rcx_20)
            goto label_14231a019

*(arg1 + 0x13f) &= 0xef
*(arg1 + 0x13f) |= rax_13.b
return sub_14231a570(arg1) __tailcall
