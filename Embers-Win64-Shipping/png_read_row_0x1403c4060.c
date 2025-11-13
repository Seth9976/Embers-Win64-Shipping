// 函数: png_read_row
// 地址: 0x1403c4060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

if ((*(arg1 + 0x158) & 0x40) == 0)
    sub_1403dd0d0(arg1)

if (*(arg1 + 0x25b) != 0 && (*(arg1 + 0x15c) & 2) != 0)
    int32_t rax_16 = *(arg1 + 0x1f4)
    uint64_t rcx_18 = zx.q(*(arg1 + 0x25c))
    
    if (rcx_18 u<= 5)
        switch (rcx_18)
            case 0
                if ((rax_16.b & 7) != 0)
                    if (arg3 == 0)
                        return sub_1403dce10(arg1) __tailcall
                    
                label_1403c440e:
                    sub_1403db6a0(arg1, arg3, 0xff)
                    return sub_1403dce10(arg1) __tailcall
            case 1
                if ((rax_16.b & 7) != 0 || *(arg1 + 0x1d8) u<= 4)
                    if (arg3 == 0)
                        return sub_1403dce10(arg1) __tailcall
                    
                    sub_1403db6a0(arg1, arg3, 0xf)
                    return sub_1403dce10(arg1) __tailcall
            case 2
                if ((rax_16 & 7) != 4)
                    if (arg3 == 0 || (rax_16 & 4) == 0)
                        return sub_1403dce10(arg1) __tailcall
                    
                    goto label_1403c440e
            case 3
                if ((rax_16.b & 3) != 0 || *(arg1 + 0x1d8) u<= 2)
                    if (arg3 == 0)
                        return sub_1403dce10(arg1) __tailcall
                    
                    sub_1403db6a0(arg1, arg3, 0x33)
                    return sub_1403dce10(arg1) __tailcall
            case 4
                if ((rax_16 & 3) != 2)
                    if (arg3 == 0 || (rax_16 & 2) == 0)
                        return sub_1403dce10(arg1) __tailcall
                    
                    goto label_1403c440e
            case 5
                if ((rax_16.b & 1) != 0 || *(arg1 + 0x1d8) u<= 1)
                    if (arg3 == 0)
                        return sub_1403dce10(arg1) __tailcall
                    
                    sub_1403db6a0(arg1, arg3, 0x55)
                    return sub_1403dce10(arg1) __tailcall
    else if ((rax_16.b & 1) == 0)
        return sub_1403dce10(arg1) __tailcall

char const* const rdx_11

if ((*(arg1 + 0x154) & 4) == 0)
    rdx_11 = "Invalid attempt to read row data"
label_1403c44b0:
    png_error(arg1, rdx_11)
    noreturn

*(arg1 + 0x170) = *(arg1 + 0x200)
uint64_t rax_2 = zx.q(*(arg1 + 0x261))
uint64_t rcx_1 = zx.q(*(arg1 + 0x1f0))
int32_t rax_4

if (rax_2 u< 8)
    rax_4 = ((rcx_1 * rax_2 + 7) u>> 3).d
else
    rax_4 = (rax_2 u>> 3).d * rcx_1.d

*(arg1 + 0x178) = rax_4 + 1
int32_t rax_7

while (true)
    if (*(arg1 + 0x168) == 0)
        int32_t i = *(arg1 + 0x240)
        
        while (i == 0)
            sub_1403d8880(arg1, 0)
            i = sub_1403d8740(arg1)
            *(arg1 + 0x240) = i
            
            if (*(arg1 + 0x254) != 0x54414449)
                rdx_11 = "Not enough image data"
                goto label_1403c44b0
        
        int32_t i_1 = *(arg1 + 0x1c0)
        *(arg1 + 0x168) = i_1
        void* rdx = *(arg1 + 0x1b8)
        *(arg1 + 0x160) = rdx
        
        if (i_1 u> i)
            *(arg1 + 0x168) = i
            i_1 = i
        
        sub_1403d8840(arg1, rdx, i_1)
        *(arg1 + 0x240) -= *(arg1 + 0x168)
    
    rax_7 = sub_140371df0(arg1 + 0x160, 1)
    
    if (rax_7 != 0)
        break
    
    if (*(arg1 + 0x178) == 0)
        goto label_1403c41e5

if (rax_7 != 1)
    char* rax_22 = *(arg1 + 0x180)
    rdx_11 = "Decompression error"
    
    if (rax_22 != 0)
        rdx_11 = rax_22
    
    goto label_1403c44b0

if (*(arg1 + 0x178) != 0 || *(arg1 + 0x168) != 0 || *(arg1 + 0x240) != 0)
    png_benign_error(arg1, "Extra compressed data")

*(arg1 + 0x154) |= 8
*(arg1 + 0x158) |= 0x20
label_1403c41e5:
*(arg1 + 0x238) = *(arg1 + 0x25e)
uint64_t rcx_10 = zx.q(*(arg1 + 0x1f0))
*(arg1 + 0x228) = rcx_10.d
int16_t rax_8
rax_8.b = *(arg1 + 0x262)
*(arg1 + 0x23a) = rax_8.b
uint64_t rax_9 = zx.q(*(arg1 + 0x261))
*(arg1 + 0x23b) = rax_9.b
uint64_t rax_11

if (rax_9 u< 8)
    rax_11 = (rax_9 * rcx_10 + 7) u>> 3
else
    rax_11 = (rax_9 u>> 3) * rcx_10

*(arg1 + 0x230) = rax_11
char* rax_14 = *(arg1 + 0x200)
uint32_t rcx_11 = zx.d(*rax_14)

if (rcx_11 != 0)
    sub_1403dbec0(arg1, arg1 + 0x228, &rax_14[1], *(arg1 + 0x1f8) + 1, rcx_11)
    rax_14 = *(arg1 + 0x200)

int32_t zmm0_1[0x4] = memcpy(*(arg1 + 0x1f8), rax_14, (*(arg1 + 0x1e8)).d + 1)

if ((*(arg1 + 0x418) & 4) != 0 && *(arg1 + 0x41c) == 0x40)
    sub_1403cb780(arg1 + 0x228, *(arg1 + 0x200) + 1)

if (*(arg1 + 0x15c) != 0)
    sub_1403c7240(arg1, zmm0_1)

if (*(arg1 + 0x25b) == 0 || (*(arg1 + 0x15c) & 2) == 0)
    if (arg2 != 0)
        sub_1403db6a0(arg1, arg2, 0xff)
    
    if (arg3 != 0)
        sub_1403db6a0(arg1, arg3, 0xff)
else
    if (*(arg1 + 0x25c) u<= 5)
        sub_1403dba20(arg1)
    
    if (arg3 != 0)
        sub_1403db6a0(arg1, arg3, *(&data_1436adc10 + (zx.q(*(arg1 + 0x25c)) << 2)))
    
    if (arg2 != 0)
        sub_1403db6a0(arg1, arg2, *(&data_1436adc30 + (zx.q(*(arg1 + 0x25c)) << 2)))

sub_1403dce10(arg1)
int64_t rax = *(arg1 + 0x300)

if (rax == 0)
    return 

*(arg1 + 0x25c)
*(arg1 + 0x1f4)
jump(rax)
