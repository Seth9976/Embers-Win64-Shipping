// 函数: sub_1408d5d30
// 地址: 0x1408d5d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = (data_143984e88).d
int32_t rcx = 0
int32_t var_84 = 1
int32_t r8 = 0
int32_t var_88 = 0
int32_t var_78 = 0xffffffff
int64_t var_74 = 0

if (r10 != 0)
    void* rax_1 = data_143984e80
    void* r11_1 = &data_143984e70
    
    if (rax_1 != 0)
        r11_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_2 = *r11_1
    
    if (rdx_2 != 0)
    label_1408d5dd5:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_84_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_74.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_74.d = r10
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_74:4.d = r8
            var_88 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r11_1 + (rdx_3 << 2) + 4)
            int32_t var_78_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1408d5dd5
        
        var_74.d = r10

int128_t var_28 = 0xffffffff
int32_t r9 = 0xffffffff << (r10.b & 0x1f)
int128_t var_38 = var_88.o
var_74.d = r10
int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_68 = (&data_143984e60).o
int128_t var_58 = var_38
int64_t var_48 = temp0_3

while (true)
    int64_t rax_11 = sx.q(var_58:0xc.d)
    int64_t* rdx_4 = var_68.q
    
    if (rax_11.d == (r9.q u>> 0x20).d && var_58.q == &data_143984e70 && rdx_4 == &data_143984e60)
        void* const result_2
        
        if (data_143cebe58 == 0)
            result_2 = nullptr
        else
            void* rax_15 = sub_1408d8ff0()
            
            if (rax_15 == 0)
                result_2 = nullptr
            else
                result_2 = data_143cebe58
                int64_t rax_16 = sx.q(*(rax_15 + 0x38))
                
                if (rax_16.d s> *(result_2 + 0x38)
                        || *(*(result_2 + 0x30) + (rax_16 << 3)) != rax_15 + 0x30)
                    result_2 = nullptr
        
        int64_t rax_18 = *arg2
        void* const result_1 = result_2
        (*(rax_18 + 0x38))(arg2, &result_1, 0, 0, var_88, &data_143984e70, r9)
        void* const result = result_1
        data_143cebe58 = result
        return result
    
    int64_t rcx_4 = rax_11 * 3
    int64_t rax_12 = *rdx_4
    (*(*arg2 + 0x38))(arg2, rax_12 + 8 + (rcx_4 << 3), *(rax_12 + (rcx_4 << 3)), 0, var_88, 
        &data_143984e70, r9)
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)
