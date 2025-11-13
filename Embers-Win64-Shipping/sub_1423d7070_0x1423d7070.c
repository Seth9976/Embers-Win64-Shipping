// 函数: sub_1423d7070
// 地址: 0x1423d7070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t** r15 = arg2
int16_t* var_38
sub_14242f630(&var_38, arg2, *(arg1 + 0x230))
int16_t* const r14 = &data_142d40450
int16_t* const rdx = &data_142d40450
int32_t var_30

if (var_30 != 0)
    rdx = var_38

int64_t arg_8
sub_140b58260(&arg_8, rdx, 1)
int64_t rax = arg_8
uint32_t rbx = zx.d(*arg1)
int32_t r10_1 = sub_140b5ead0(rax.d) + rax:4.d
uint32_t* rax_6

if (data_143a305d8 == data_143a30604)
labelid_20:
    rax_6 = sub_1420d76a0(&data_143a305d0, r10_1, &arg_8)
else
    void* rcx_3 = data_143a30610
    void* rax_4 = &data_143a30608
    
    if (rcx_3 != 0)
        rax_4 = rcx_3
    
    int32_t rax_5 = *(rax_4 + (((sx.q(data_143a30618) - 1) & sx.q(r10_1)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_1423d7162:
        rax_6 = sub_1420d76a0(&data_143a305d0, r10_1, &arg_8)
    else
        int64_t r9_1 = data_143a305d0
        int64_t r8_2
        
        while (true)
            r8_2 = sx.q(rax_5) * 0x14
            
            if (*(r8_2 + r9_1) == arg_8)
                break
            
            rax_5 = *(r8_2 + r9_1 + 0xc)
            
            if (rax_5 == 0xffffffff)
                goto label_1423d7162_2
        
        if (rax_5 == 0xffffffff)
        label_1423d7162_1:
            rax_6 = sub_1420d76a0(&data_143a305d0, r10_1, &arg_8)
        else
            void* rax_15 = r8_2 + r9_1
            
            if (rax_15 == 0)
            label_1423d7162_2:
                rax_6 = sub_1420d76a0(&data_143a305d0, r10_1, &arg_8)
            else
                rax_6 = rax_15 + 8

*rax_6 = rbx
sub_140d18050(arg_8)
void* result = nullptr
int16_t* const rdx_6 = &data_142d40450
int32_t rsi = 0

if (var_30 != 0)
    rdx_6 = var_38

void* rax_7 = sub_140d1dfb0(nullptr, rdx_6)

if (rax_7 != 0 && *arg1 == 3)
    *(rax_7 + 0x50) |= 0x100000
    rsi = 0x80000

if (r15[1].d != 0)
    r14 = *r15

void* rax_8 = sub_140d23fd0(rax_7, r14, rsi, nullptr, 0)
int64_t rdx_8 = arg_8
*arg3 = rax_8
sub_140943780(&data_143a305d0, rdx_8)
void* rcx_7 = *arg3

if (rcx_7 != 0)
    void* result_2 = sub_142435380(rcx_7)
    void* result_1 = result_2
    
    if (result_2 == 0)
        void* result_3 = sub_142435740(*arg3, nullptr)
        result_1 = result_3
        
        if (result_3 != 0)
            *arg3 = sub_140d21d80(result_3)
    
    *(*arg3 + 0x58) = *(arg1 + 0x230)
    void* rax_11 = *arg3
    *(rax_11 + 0x50) |= 0x100000
    int64_t* rdi_1 = *(result_1 + 0x98)
    uint64_t r14_2 = sx.q(*(result_1 + 0xa0)) << 3 u>> 3
    
    if (rdi_1 u> &rdi_1[sx.q(*(result_1 + 0xa0))])
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            sub_1420ebbf0(*rdi_1, *(arg1 + 0x230))
            result += 1
            rdi_1 = &rdi_1[1]
        while (result != r14_2)
    
    result = result_1

int16_t* rcx_12 = var_38

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

return result
