// 函数: sub_140ad7820
// 地址: 0x140ad7820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
TEB* gsbase

if (data_143dbb378 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143dbb378)
    
    if (data_143dbb378 == 0xffffffff)
        sub_1405947f0(&data_143dbb368, 9)
        int32_t rax_20 = data_143dbb370 + 9
        bool cond:0_1 = rax_20 s<= data_143dbb374
        data_143dbb370 = rax_20
        
        if (not(cond:0_1))
            sub_140594770(&data_143dbb368)
        
        UnDecorator::getReferenceType(data_143dbb368, u"BadIndex", 0x12)
        atexit(sub_142cbe1e0)
        _Init_thread_footer(&data_143dbb378)

if (rbx.d s< 0 || rbx.d s>= *(arg1 + 0x60))
    return &data_143dbb368

int32_t r10 = *(arg1 + 0x30)
void* r9_1 = arg1 + 0x18
int32_t var_54 = 1
int64_t rdi = *(*(arg1 + 0x58) + (rbx << 3))
int32_t var_58 = 0
int32_t rcx = 0
void* var_50 = r9_1
int32_t r8_1 = 0
int32_t var_48 = 0xffffffff
int64_t var_44 = 0

if (r10 != 0)
    void* rax_3 = *(r9_1 + 0x10)
    
    if (rax_3 != 0)
        r9_1 = rax_3
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_140ad7908:
        int32_t rax_10 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_54_1 = rax_10
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_2
        
        var_44.d = r8_1 - rax_11 + 0x1f
        
        if (r8_1 - rax_11 + 0x1f s> r10)
            var_44.d = r10
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8_1 += 0x20
            rcx += 1
            var_44:4.d = r8_1
            var_58 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            var_48 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_140ad7908
        
        var_44.d = r10

int128_t var_18 = 0xffffffff
double var_28[0x2] = var_58.o
var_58.o = (arg1 + 8).o
int64_t var_38 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_48.o = var_28

if (0 s>= r10)
    return 0

int32_t i_1
int32_t i = i_1

do
    int64_t rax_13 = *var_58.q
    
    if (*((sx.q(i) << 5) + rax_13 + 0x10) == rdi)
        return (sx.q(i) << 5) + rax_13
    
    var_44:4.d &= not.d(var_50:4.d)
    sub_14059bdd0(&var_50)
    i = i_1
while (i s< *(var_48.q + 0x18))

return 0
