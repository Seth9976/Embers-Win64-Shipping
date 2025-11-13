// 函数: sub_142706000
// 地址: 0x142706000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ee9b30(arg1, arg2)
arg1[0x2b].d &= 0xfffffffd
void* const rsi = arg1[0x14]

if (rsi != 0)
    wchar16* i_1 = nullptr
    
    for (wchar16* i = wcsstr(&UAIPerceptionComponent::OnOwnerEndPlay", ::"); i != 0; 
            i = wcsstr(&i[1], ::"))
        i_1 = i
    
    int64_t arg_8
    sub_140b58260(&arg_8, &i_1[2], 1)
    int64_t rbx_1 = arg_8
    int128_t var_48
    sub_140d3a3a0(&var_48, nullptr)
    int64_t var_40_1 = 0
    sub_140d3a3a0(&var_48, arg1)
    int32_t rcx_4
    rcx_4.b = sub_140b5b8a0(rbx_1.d, 0) == 0
    
    if ((rbx_1:4.d != 0 | rcx_4.b) != 0)
        void* rax_2 = sub_140d3c6e0(&var_48)
        
        if (rax_2 != 0)
            sub_140d1fd20(rax_2, rbx_1)
    
    int128_t zmm6_1 = var_48
    TEB* gsbase
    
    if (data_143f38e90
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f38e90)
        
        if (data_143f38e90 == 0xffffffff)
            zmm6_1 = sub_140b58170(&data_143f38e88, "OnEndPlay", 1)
            _Init_thread_footer(&data_143f38e90)
    
    int64_t rdx_4 = data_143f38e88
    int128_t var_38 = zmm6_1
    char rax_5 = sub_140d18770(rsi, rdx_4, &var_38)
    *(rsi + 0x18f) |= rax_5
    void* rax_6 = sub_1427249f0()
    void* rdx_5 = *(rsi + 0x10)
    int64_t rax_7 = sx.q(*(rax_6 + 0x38))
    
    if (rax_7.d s> *(rdx_5 + 0x38) || *(*(rdx_5 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30)
        rsi = nullptr
    
    arg1[0x1b] = rsi

int64_t* rax_9 = arg1[0x15]

if (rax_9 == 0)
    rax_9 = sub_141ee69e0(arg1)

void* result = sub_1426fbdd0(rax_9)
int64_t* result_2 = result

if (result != 0)
    arg1[0x1c].d = 0
    
    if (arg1[0x17].d s> 0)
        int64_t** rbx_2 = arg1[0x16]
        int64_t rsi_1 = 0
        uint64_t r14_2 = sx.q(arg1[0x17].d) << 3 u>> 3
        
        if (rbx_2 u> &rbx_2[arg1[0x17]])
            r14_2 = 0
        
        if (r14_2 != 0)
            do
                int64_t* rdx_6 = *rbx_2
                
                if (rdx_6 != 0)
                    sub_14270a400(arg1, rdx_6, result_2)
                
                rbx_2 = &rbx_2[1]
                rsi_1 += 1
            while (rsi_1 != r14_2)
        
        result = sub_142717480(result_2, arg1)

int64_t* rbx_3 = arg1[0x14]

if (rbx_3 == 0)
    rbx_3 = nullptr
else
    void* rax_11 = sub_1427249f0()
    void* rdx_8 = rbx_3[2]
    result = sx.q(*(rax_11 + 0x38))
    
    if (result.d s> *(rdx_8 + 0x38))
        rbx_3 = nullptr
    else
        void* result_1 = result
        result = *(rdx_8 + 0x30)
        
        if (*(result + (result_1 << 3)) != rax_11 + 0x30)
            rbx_3 = nullptr

arg1[0x1b] = rbx_3

if (rbx_3 != 0)
    result = rbx_3[0x5d]
    
    if (result != 0 && result != arg1)
        result = (*(*rbx_3 + 0x150))(rbx_3)
        
        if (result != 0)
            int64_t* rcx_17 = arg1[0x1b]
            result = (*(*rcx_17 + 0x150))(rcx_17)

void* rcx_18 = arg1[0x1b]

if (rcx_18 != 0 && *(rcx_18 + 0x2e8) == 0)
    return sub_140f5e6e0(rcx_18, arg1) __tailcall

return result
