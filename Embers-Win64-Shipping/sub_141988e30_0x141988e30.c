// 函数: sub_141988e30
// 地址: 0x141988e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_1439c81f8)
int64_t* rbx = data_1439c8220
int64_t rdi = 0
uint64_t rsi_1 = sx.q(data_1439c8228.d) << 3 u>> 3

if (rbx u> &rbx[sx.q(data_1439c8228)])
    rsi_1 = 0

if (rsi_1 != 0)
    do
        sub_14198b9c0(&data_1439c8130, *rbx)
        rdi += 1
        rbx = &rbx[1]
    while (rdi != rsi_1)

sub_14198b9c0(&data_1439c8130, data_1439c8140)
sub_14198b9c0(&data_1439c8130, data_1439c8138)
LeaveCriticalSection(&data_1439c81f8)
sub_141988c00(&data_143f02140)
int64_t i_1 = 2
int64_t i

do
    AcquireSRWLockExclusive(&data_143f02050)
    int32_t arg_8 = 2
    sub_14195bb10(&data_143f02050, 2, &arg_8)
    int32_t rcx_1 = arg_8
    
    if (((rcx_1 u>> 1).b & 1) != 0)
        ReleaseSRWLockExclusive(&data_143f02050)
    else if ((rcx_1.b & 1) != 0)
        ReleaseSRWLockShared(&data_143f02050)
    
    sub_141969b00(&data_1439c8130)
    i = i_1
    i_1 -= 1
while (i != 1)
sub_141988930()
int32_t r10 = (data_1439c8268).d
void* var_a0 = &data_1439c8250
int32_t rcx_2 = 0
int32_t var_a8 = 0
int32_t var_a4 = 1
int32_t var_98 = 0xffffffff
int32_t r8_2 = 0
int64_t var_94 = 0

if (r10 != 0)
    void* rax_4 = data_1439c8260
    void* r11_1 = &data_1439c8250
    
    if (rax_4 != 0)
        r11_1 = rax_4
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_6 = *r11_1
    
    if (rdx_6 != 0)
    label_141988fe5:
        int32_t rax_11 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_11)
        int32_t var_a4_1 = rax_11
        int32_t arg_10 = temp0_1
        int32_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0x20
        else
            rax_12 = 0x1f - temp0_1
        
        int32_t rax_13 = r8_2 - rax_12 + 0x1f
        
        if (rax_13 s> r10)
            rax_13 = r10
        
        var_94.d = rax_13
    else
        while (true)
            int64_t rdx_7 = sx.q(rcx_2)
            r8_2 += 0x20
            rcx_2 += 1
            var_94:4.d = r8_2
            var_a8 = rcx_2
            
            if (rdx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                var_94.d = r10
                break
            
            rdx_6 = *(r11_1 + (rdx_7 << 2) + 4)
            int32_t var_98_1 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_141988fe5

int128_t var_70 = 0xffffffff
uint128_t var_80
var_80:8.d = 0xffffffff << (r10.b & 0x1f)
var_80:0xc.d = r10
int64_t* var_60 = (&data_1439c8240).o.q
uint128_t var_50 = var_a8.o
int64_t var_40 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)

while (true)
    int64_t rax_14 = sx.q(var_50:0xc.d)
    
    if (rax_14.d == (var_80:8.q u>> 0x20).d && var_50.q == &data_1439c8250
            && var_60 == &data_1439c8240)
        return sub_140ba2630(&data_1439c8240, 0) __tailcall
    
    int64_t* rbx_1 = _mm_bsrli_si128(*(*var_60 + rax_14 * 0x18), 8).q
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        if (rbx_1[2].b == 0)
            bool z_1
            
            if (0 == *(rbx_1 + 0xc))
                *(rbx_1 + 0xc) = 1
                z_1 = true
            else
                *(rbx_1 + 0xc)
                z_1 = false
            
            if (z_1)
                int32_t rax_19 = sub_140a20af0()
                uint64_t rdx_9 = zx.q(rax_19)
                void* const rax_20
                
                if (rax_19 != 0)
                    rax_20 =
                        *(&data_143cf0bf8 + (rdx_9 u>> 0xe << 3)) + (zx.q(rdx_9.d) & 0x3fff) * 0x18
                else
                    rax_20 = nullptr
                
                *(rax_20 + 8) = rbx_1
                sub_1405a42f0(&data_143f02390, rdx_9.d)
        else
            (**rbx_1)(rbx_1, 1)
    
    int32_t var_54
    var_50:8.d &= not.d(var_54)
    void var_58
    sub_14059bdd0(&var_58)
