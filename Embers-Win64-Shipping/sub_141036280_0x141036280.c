// 函数: sub_141036280
// 地址: 0x141036280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_1 = std::_Get_future_error_what((*U"1111")[sx.q(data_1439c7a08)])
void* result_1
sub_1419a2ec0(rax_1, &result_1, &data_143f10bd0, 0)
void* result_2 = result_1
void* var_10

if (result_2 != 0)
    int64_t rdx_1 = sx.q(*(result_2 + 0x10c))
    int64_t* rcx_3 = *(var_10 + 0x10)
    
    if (*(rcx_3[3] + (rdx_1 << 3)) == 0)
        sub_1419ccf30(rcx_3, rdx_1.d)

sub_1419a2ec0(rax_1, &result_1, &data_143f10bd0, 0)
void* result_3 = result_1

if (result_3 != 0)
    int64_t rdx_3 = sx.q(*(result_3 + 0x10c))
    int64_t* rcx_5 = *(var_10 + 0x10)
    
    if (*(rcx_5[3] + (rdx_3 << 3)) == 0)
        sub_1419ccf30(rcx_5, rdx_3.d)

sub_1419a2ec0(rax_1, &result_1, &data_143f1ed10, 0)
int128_t* rdx_5 = &result_1
int64_t* rcx_7 = rax_1
int64_t* r8

if ((data_143f0f1a0 & 0xfffffffb) == 0)
    sub_1419a2ec0(rcx_7, rdx_5, &data_143f1e6c0, 0)
    void* result_4 = result_1
    
    if (result_4 != 0)
        int64_t rdx_6 = sx.q(*(result_4 + 0x10c))
        int64_t* rcx_8 = *(var_10 + 0x10)
        
        if (*(rcx_8[3] + (rdx_6 << 3)) == 0)
            sub_1419ccf30(rcx_8, rdx_6.d)
    
    r8 = &data_143f1e6c0
    rdx_5 = &result_1
    rcx_7 = rax_1
else
    r8 = &data_143f1eaf0

sub_1419a2ec0(rcx_7, rdx_5, r8, 0)
void* result = result_1

if (result != 0)
    int64_t rdx_7 = sx.q(*(result + 0x10c))
    int64_t* rcx_9 = *(var_10 + 0x10)
    result = rcx_9[3]
    
    if (*(result + (rdx_7 << 3)) == 0)
        return sub_1419ccf30(rcx_9, rdx_7.d) __tailcall

return result
