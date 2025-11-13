// 函数: sub_140a85c90
// 地址: 0x140a85c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = arg1[8]
int64_t* rbx = arg1

if (rsi != 0)
    int64_t* rcx = data_143ddb3f0
    
    if (rcx == 0)
        sub_140a750a0()
        rcx = data_143ddb3f0
    
    rbx[8] = (*(*rcx + 0x20))(rcx, rsi, 0, 0)

int32_t i_2 = rbx[9].d
void* rsi_1 = &rbx[9]

if (i_2 == 0)
    return 

sub_1405a4aa0(&arg1[7], 0, i_2, 4)
int32_t rcx_2 = 0

if (i_2 s> 0)
    int64_t r9_1 = 0
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        void* rdx_2 = arg1[8]
        void* rax_2 = &arg1[7]
        int64_t r8_4 = (sx.q(*rsi_1) - 1) & r9_1
        
        if (rdx_2 != 0)
            rax_2 = rdx_2
        
        r9_1 += 1
        *(rax_2 + (r8_4 << 2)) = 0xffffffff
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t r10_1 = rbx[5].d
void* r9_2 = &rbx[2]
int32_t var_58_1 = 0
int32_t r8_5 = 0
int32_t var_54_1 = 1
void* var_50_1 = r9_2
int32_t var_48_1 = 0xffffffff
int64_t var_44_1 = 0

if (r10_1 != 0)
    void* rax_3 = *(r9_2 + 0x10)
    
    if (rax_3 != 0)
        r9_2 = rax_3
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10_1 - 1)
    int32_t rdx_5 = *r9_2
    
    if (rdx_5 != 0)
    label_140a85db8:
        int32_t rax_10 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_54_2 = rax_10
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_2
        
        var_44_1.d = r8_5 - rax_11 + 0x1f
        
        if (r8_5 - rax_11 + 0x1f s> r10_1)
            var_44_1.d = r10_1
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_2)
            r8_5 += 0x20
            rcx_2 += 1
            var_44_1:4.d = r8_5
            var_58_1 = rcx_2
            
            if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_5 = *(r9_2 + (rdx_6 << 2) + 4)
            int32_t var_48_2 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_140a85db8
        
        var_44_1.d = r10_1

int64_t* var_38_1 = rbx
int128_t var_30 = var_58_1.o
int64_t var_20_1 = 0xffffffff

if (0 s>= r10_1)
    return 

int32_t r10_2 = 0

while (true)
    int64_t rcx_4 = sx.q(r10_2) * 5
    int64_t rax_14 = *rbx
    void* r9_3 = rax_14 + (rcx_4 << 3)
    uint32_t rcx_6 = (*(rax_14 + (rcx_4 << 3)) u>> 4).d
    int32_t rdx_8 = (0x9e3779b9 - rcx_6) ^ rcx_6 << 8
    int32_t r8_9 = neg.d(rdx_8 + rcx_6) ^ rdx_8 u>> 0xd
    int32_t rcx_9 = (rcx_6 - rdx_8 - r8_9) ^ r8_9 u>> 0xc
    int32_t rdx_11 = (rdx_8 - rcx_9 - r8_9) ^ rcx_9 << 0x10
    int32_t r8_12 = (r8_9 - rdx_11 - rcx_9) ^ rdx_11 u>> 5
    int32_t rcx_12 = (rcx_9 - rdx_11 - r8_12) ^ r8_12 u>> 3
    int32_t rdx_14 = (rdx_11 - rcx_12 - r8_12) ^ rcx_12 << 0xa
    int32_t r8_16 = ((r8_12 - rdx_14 - rcx_12) ^ rdx_14 u>> 0xf) & (*rsi_1 - 1)
    void* rax_31 = &arg1[7]
    *(r9_3 + 0x24) = r8_16
    void* rdx_16 = arg1[8]
    int64_t r8_17 = sx.q(r8_16)
    
    if (rdx_16 != 0)
        rax_31 = rdx_16
    
    *(r9_3 + 0x20) = *(rax_31 + (((sx.q(*rsi_1) - 1) & r8_17) << 2))
    void* rax_33 = &arg1[7]
    void* rcx_16 = arg1[8]
    
    if (rcx_16 != 0)
        rax_33 = rcx_16
    
    *(rax_33 + (((sx.q(*rsi_1) - 1) & r8_17) << 2)) = r10_2
    var_20_1.d &= not.d(var_30:4.d)
    sub_14059bdd0(&var_30)
    r10_2 = var_20_1:4.d
    
    if (r10_2 s>= *(var_30:8.q + 0x18))
        break
    
    rbx = var_38_1
