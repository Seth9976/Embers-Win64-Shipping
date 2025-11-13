// 函数: sub_1408644a0
// 地址: 0x1408644a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = (data_14396ff98).d
int32_t var_94 = 1
void* var_90 = &data_14396ff80
int64_t var_84 = 0
int32_t rcx = 0
int32_t var_98 = 0
int32_t var_88 = 0xffffffff
int32_t r8 = 0

if (r10 != 0)
    void* rax_1 = data_14396ff90
    void* r11_1 = &data_14396ff80
    
    if (rax_1 != 0)
        r11_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r11_1
    
    if (rdx_3 != 0)
    label_140864555:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_84.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_84.d = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_84:4.d = r8
            var_98 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r11_1 + (rdx_4 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_140864555
        
        var_84.d = r10

int128_t var_38 = 0xffffffff
var_84.d = r10
int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_78 = (&data_14396ff70).o
int96_t var_68 = var_98.o:8.12
int64_t var_58 = temp0_3

while (true)
    int32_t result_1
    int64_t result = sx.q(result_1)
    int64_t* rdx_5 = var_78.q
    
    if (result.d == ((0xffffffff << (r10.b & 0x1f)).q u>> 0x20).d && var_68.q == &data_14396ff80
            && rdx_5 == &data_14396ff70)
        return result
    
    int64_t i_1 = 7
    int64_t* rbx_2 = *(*rdx_5 + result * 0x18 + 8) + 0x1b8
    int64_t* rdi_1 = rbx_2
    int64_t i
    
    do
        int32_t arg_10
        sub_1405ba560(rbx_2, &arg_10, arg1)
        int64_t rax_12 = sx.q(arg_10)
        void* const rcx_8
        
        if (rax_12.d == 0xffffffff)
            rcx_8 = nullptr
        else
            rcx_8 = (rax_12 << 5) + *rbx_2
        
        int64_t* rax_13 = rcx_8 + 8
        
        if (rcx_8 == 0)
            rax_13 = nullptr
        
        if (rax_13 != 0)
            sub_14084daa0(*rax_13)
            sub_140868ad0(rdi_1, arg1)
        
        rdi_1 = &rdi_1[0xa]
        rbx_2 = &rbx_2[0xa]
        i = i_1
        i_1 -= 1
    while (i != 1)
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
