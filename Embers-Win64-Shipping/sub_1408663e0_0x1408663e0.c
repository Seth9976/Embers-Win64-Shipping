// 函数: sub_1408663e0
// 地址: 0x1408663e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = (data_14396ff98).d
int32_t r8 = 0
int32_t var_84 = 1
int32_t var_88 = 0
void* var_80 = &data_14396ff80
int32_t var_78 = 0xffffffff
int32_t r9 = 0
int64_t var_74 = 0

if (rbx != 0)
    void* rax_1 = data_14396ff90
    void* r11_1 = &data_14396ff80
    
    if (rax_1 != 0)
        r11_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rcx = *r11_1
    
    if (rcx != 0)
    label_140866487:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_84_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_74.d = r9 - rax_9 + 0x1f
        
        if (r9 - rax_9 + 0x1f s> rbx)
            var_74.d = rbx
    else
        while (true)
            int64_t rcx_1 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_74:4.d = r9
            var_88 = r8
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r11_1 + (rcx_1 << 2) + 4)
            int32_t var_78_1 = 0xffffffff
            
            if (rcx != 0)
                goto label_140866487
        
        var_74.d = rbx

int128_t var_28 = 0xffffffff
int128_t var_38 = var_88.o
var_74.d = rbx
int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_68 = (&data_14396ff70).o
int128_t var_58 = var_38
int64_t var_48 = temp0_3

while (true)
    int64_t result = sx.q(var_58:0xc.d)
    int64_t* rdx_3 = var_68.q
    
    if (result.d == ((0xffffffff << (rbx.b & 0x1f)).q u>> 0x20).d && var_58.q == &data_14396ff80
            && rdx_3 == &data_14396ff70)
        return result
    
    void* rbx_1 = *(*rdx_3 + result * 0x18 + 8)
    void* rcx_6 = *(rbx_1 + 0x10)
    
    if (rcx_6 != 0)
        int64_t* rcx_7 = *(rcx_6 + 0x468)
        
        if (rcx_7 != 0 && (**rcx_7)(rcx_7, &data_143ce39a0) == arg1)
            sub_140865380(rbx_1 + 0x4c0, 0)
    
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)
