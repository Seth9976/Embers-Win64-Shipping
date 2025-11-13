// 函数: sub_140d0da10
// 地址: 0x140d0da10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d0de20(arg1, arg2)
int64_t* rcx = arg2[1]
char arg_10 = *(arg1 + 0x34)
char* rdx = *rcx

if (&rdx[1] u> rcx[1])
    (*(*arg2 + 0x150))(arg2, &arg_10, 1)
else
    arg_10 = *rdx
    *rcx += 1

bool r8 = arg2[5].b
bool arg_8 = false

if ((r8 & 1) != 0)
    int64_t* rcx_2 = arg2[1]
    char* rdx_2 = *rcx_2
    
    if (&rdx_2[1] u> rcx_2[1])
        (*(*arg2 + 0x150))(arg2, &arg_8, 1)
    else
        arg_8 = *rdx_2
        *rcx_2 += 1
    
    int32_t rax_7 = *(arg1 + 0xc)
    void* const rax_14
    
    if (rax_7 s>= data_143e1d9b4)
        rax_14 = nullptr
    else
        int16_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rax_7)
        uint32_t rdx_5 = zx.d(temp2_1)
        int32_t rax_9 = temp3_1 + rdx_5
        rax_14 =
            *(data_143e1d9a0 + (sx.q(rax_9 s>> 0x10) << 3)) + sx.q(zx.d(rax_9.w) - rdx_5) * 0x18
    
    uint8_t rax_16 = (*(rax_14 + 8) u>> 0x1d).b
    
    if ((rax_16 & 1) != 0)
        return rax_16
    
    return sub_140d10a60(arg1, zx.d(arg_10), arg_8 != 0, 0)

void* const rax_27

if (((*(arg1 + 8) u>> 4).b & 1) == 0)
    int32_t rax_20 = *(arg1 + 0xc)
    
    if (rax_20 s>= data_143e1d9b4)
        rax_27 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_20)
        uint32_t rdx_9 = zx.d(temp0_1)
        int32_t rax_22 = temp1_1 + rdx_9
        rax_27 =
            *(data_143e1d9a0 + (sx.q(rax_22 s>> 0x10) << 3)) + sx.q(zx.d(rax_22.w) - rdx_9) * 0x18

bool rax_19

if (((*(arg1 + 8) u>> 4).b & 1) != 0 || ((*(rax_27 + 8) u>> 0x1d).b & 1) != 0 || (r8 & 2) == 0)
    rax_19 = false
else
    rax_19 = *(arg1 + 0x73) == 0xff

int64_t* rcx_13 = arg2[1]
arg_8 = rax_19
bool* rdx_11 = *rcx_13

if (&rdx_11[1] u> rcx_13[1])
    return (*(*arg2 + 0x150))(arg2, &arg_8, 1)

bool rax_30 = *rdx_11
arg_8 = rax_30
*rcx_13 += 1
return rax_30
