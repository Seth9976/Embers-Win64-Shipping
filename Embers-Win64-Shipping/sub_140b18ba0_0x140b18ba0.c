// 函数: sub_140b18ba0
// 地址: 0x140b18ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = 0x14
TEB* gsbase
int64_t rcx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143de68b0 s> *(0x14 + rcx_1))
    rcx_1, rdx = _Init_thread_header(&data_143de68b0)
    
    if (data_143de68b0 == 0xffffffff)
        atexit(sub_142cbfab0)
        rcx_1, rdx = _Init_thread_footer(&data_143de68b0)

if (data_143de6898 != 0)
    return &data_143de68a0

int512_t entry_zmm2
sub_140b17fe0(rcx_1, rdx, entry_zmm2)
int32_t rbx = data_1439a49c8.d
int32_t var_c4 = 1
int32_t rcx_2 = 0
int32_t var_c8 = 0
int32_t var_b8 = 0xffffffff
void* var_c0 = &data_1439a49b0
int32_t r8 = 0
int64_t var_b4 = 0

if (rbx != 0)
    void* rax_2 = data_1439a49c0
    void* r9_1 = &data_1439a49b0
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_140b18ca8:
        int32_t rax_9 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_c4_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_b4.d = r8 - rax_10 + 0x1f
        
        if (r8 - rax_10 + 0x1f s> rbx)
            var_b4.d = rbx
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_2)
            r8 += 0x20
            rcx_2 += 1
            var_b4:4.d = r8
            var_c8 = rcx_2
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_b8_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_140b18ca8
        
        var_b4.d = rbx

int32_t rdx_5 = data_1439a49c8.d
int64_t* var_78 = &data_1439a49a0
var_b4.d = rdx_5
int128_t var_60 = 0xffffffff
int128_t var_70 = var_c8.o
int32_t rsi = 0xffffffff << (rdx_5 & 0x1f).b
int128_t zmm0 = var_78.o
int32_t r8_3 = rdx_5 s>> 5
int32_t r9_3 = rdx_5 & 0xffffffe0
int64_t var_88 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_b8_2 = rsi
int128_t zmm1 = var_70
int128_t var_a8 = zmm0
int128_t var_98 = zmm1

if (rdx_5 != rbx)
    void* rax_14 = data_1439a49c0
    void* r10_1 = &data_1439a49b0
    
    if (rax_14 != 0)
        r10_1 = rax_14
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_3) << 2)) & rsi
    
    if (rdx_9 != 0)
    label_140b18d75:
        int32_t rax_20 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_20)
        int32_t r11_1
        
        if (rax_20 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_b4.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx)
            var_b4.d = rbx
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_6 << 2) + 4)
            var_b8_2 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_140b18d75
        
        var_b4.d = rbx

while (true)
    int64_t rdx_10 = sx.q(var_98:0xc.d)
    int64_t rcx_8 = var_a8.q
    int32_t rax_13
    
    if (rdx_10.d != (var_b8_2.q u>> 0x20).d || var_98.q != &data_1439a49b0
            || rcx_8 != &data_1439a49a0)
        rax_13.b = 1
    else
        rax_13.b = 0
    
    if (rax_13.b == 0)
        break
    
    int64_t* rbx_3 = rdx_10 * 0x58 + *rcx_8
    sub_140596d10(&var_78, rbx_3)
    sub_140b0b180(&var_70:8, &rbx_3[2])
    char var_58
    
    if (var_58 != 0)
        int64_t rbx_4 = sx.q(data_143de68a8)
        int32_t rax_21 = (rbx_4 + 1).d
        bool cond:4_1 = rax_21 s<= data_143de68ac
        data_143de68a8 = rax_21
        
        if (not(cond:4_1))
            sub_1405a4f90(&data_143de68a0)
        
        int32_t rdi_1 = var_70.d
        int64_t* rbx_6 = (rbx_4 << 4) + data_143de68a0
        *rbx_6 = 0
        rbx_6[1].d = rdi_1
        
        if (rdi_1 != 0)
            sub_1405a4c70(rbx_6, rdi_1, 0)
            memcpy(*rbx_6, var_78, rdi_1 * 2)
        else
            *(rbx_6 + 0xc) = 0
    
    sub_140b0bdf0(&var_70:8)
    int64_t* rcx_14 = var_78
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    var_98:8.d &= not.d(var_a8:0xc.d)
    sub_14059bdd0(&var_a8:8)

data_143de6898 = 1
return &data_143de68a0
