// 函数: sub_140cb7dc0
// 地址: 0x140cb7dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
void* r14 = data_143e1b318

if (r14 == 0)
    void* rax_2 = sub_140cbc430()
    r14 = rax_2
    data_143e1b318 = rax_2

int32_t var_5c = 0x80
int64_t var_c0 = 0
int32_t r12 = 0
int64_t var_b8 = 0
int32_t r15 = 0
int64_t var_88 = 0
int32_t var_80 = 0
int64_t var_78
__builtin_memset(&var_78, 0, 0x1c)
int32_t var_54 = 0
void* var_48 = nullptr
int32_t var_40 = 0
int32_t var_58 = 0xffffffff
void var_50

while (true)
    int64_t rax_3 = 0
    
    if (0 == *(r14 + 8))
        *(r14 + 8) = 0
    else
        rax_3 = *(r14 + 8)
    
    int64_t rbx_1 = rax_3
    int64_t rax_11
    int32_t i
    
    for (i = rax_3.d & 0x3ffffff; i != 0; i = rax_11.d & 0x3ffffff)
        if ((((rbx_1 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
                u< (rbx_1 & 0xfffffffffc000000))
            sub_140a2c900()
        
        void* rdx_1
        
        if (i != 0)
            rdx_1 = *((zx.q(i) u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(i) & 0x3fff) * 0x18
        else
            rdx_1 = nullptr
        
        bool z_1
        
        if (rbx_1 == *(r14 + 8))
            *(r14 + 8) = zx.q(*(rdx_1 + 0x10)) | ((rbx_1 & 0xfffffffffc000000) + 0x4000000)
            z_1 = true
        else
            *(r14 + 8)
            z_1 = false
        
        if (z_1)
            *(rdx_1 + 0x10) = 0
            break
        
        rax_11 = 0
        
        if (0 == *(r14 + 8))
            *(r14 + 8) = 0
        else
            rax_11 = *(r14 + 8)
        
        rbx_1 = rax_11
    
    if (i == 0)
        break
    
    void* rbx_2 = *(*((zx.q(i) u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(i) & 0x3fff) * 0x18 + 8)
    sub_140a24050(i)
    
    if (rbx_2 == 0)
        break
    
    int64_t rdi_4 = sx.q(var_b8.d)
    int32_t rax_15 = (rdi_4 + 1).d
    var_b8.d = rax_15
    
    if (rax_15 s> var_b8:4.d)
        sub_1405a4d70(&var_c0)
    
    *(var_c0 + (rdi_4 << 3)) = rbx_2
    int64_t r9_1 = sx.q(*(rbx_2 + 0xc))
    int32_t var_b0 = r9_1.d
    int32_t* rax_22
    
    if (var_80 == var_54)
    labelid_1:
        rax_22 = sub_140caa4f0(&var_88, r9_1.d, &var_b0)
    else
        void* rcx_9 = &var_50
        
        if (var_48 != 0)
            rcx_9 = var_48
        
        int32_t rax_21 = *(rcx_9 + ((sx.q(var_40 - 1) & r9_1) << 2))
        
        if (rax_21 == 0xffffffff)
        label_140cb7fc3:
            rax_22 = sub_140caa4f0(&var_88, r9_1.d, &var_b0)
        else
            int64_t r8_1 = var_88
            int64_t rcx_11
            
            while (true)
                rcx_11 = sx.q(rax_21) * 2
                
                if (*(r8_1 + (rcx_11 << 3)) == r9_1.d)
                    break
                
                rax_21 = *(r8_1 + (rcx_11 << 3) + 8)
                
                if (rax_21 == 0xffffffff)
                    goto label_140cb7fc3_2
            
            if (rax_21 == 0xffffffff)
            label_140cb7fc3_1:
                rax_22 = sub_140caa4f0(&var_88, r9_1.d, &var_b0)
            else
                void* rax_25 = r8_1 + (rcx_11 << 3)
                
                if (rax_25 == 0)
                label_140cb7fc3_2:
                    rax_22 = sub_140caa4f0(&var_88, r9_1.d, &var_b0)
                else
                    rax_22 = rax_25 + 4
    
    *rax_22 += 1
    r15 += 1
    r12 += *(rbx_2 + 0x1c) + *(rbx_2 + 0xc)

for (int32_t i_1 = var_b8.d; i_1 != 0; i_1 = var_b8.d)
    int64_t r9_2 = var_c0
    int64_t rdi_5 = *(r9_2 + (sx.q(i_1 - 1) << 3))
    
    if (0 != 0)
        memmove(r9_2 + (sx.q(i_1 - 1) << 3), r9_2 + (sx.q(i_1) << 3), 0 << 3)
    
    var_b8.d = i_1 - 1
    sub_1405c53d0(&var_c0)
    int32_t rax_29 = sub_140a20af0()
    uint64_t rdx_11 = zx.q(rax_29)
    void* rax_30
    
    if (rax_29 != 0)
        rax_30 = *((rdx_11 u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(rdx_11.d) & 0x3fff) * 0x18
    else
        rax_30 = nullptr
    
    *(rax_30 + 8) = rdi_5
    sub_140ccd2c0(r14, rdx_11.d)

int32_t r10 = 1

if (r15 s>= 1)
    r10 = r15

int32_t var_d0 = divs.dp.d(sx.q((sx.q(r12) << 3 u>> 0xa).d), r10)
int32_t var_d8 = divs.dp.d(sx.q(r12), r10)
sub_140b1f700(arg1, u"GCPoolStats: %d Pools totaling %d KB. Avg: Objs=%d, Size=%d KB.", zx.q(r15))
int32_t* var_a8 = nullptr
int32_t var_a0 = 0
sub_140caa7e0(&var_88, &var_a8)
int64_t rbx_4 = sx.q(var_a0)
int32_t* r14_1 = var_a8
char var_c8 = 0
sub_140caad10(r14_1, rbx_4.d)
void* rcx_26 = &r14_1[rbx_4]
int64_t rdi_6 = 0
int32_t* rbx_5 = r14_1
uint64_t rsi_6 = (rcx_26 - r14_1 + 3) u>> 2

if (r14_1 u> rcx_26)
    rsi_6 = 0

if (rsi_6 != 0)
    do
        int64_t r8_7 = sx.q(*rbx_5)
        void* rax_45
        
        if (var_80 == var_54)
        label_140cb8193:
            rax_45 = nullptr
        else
            void* rcx_27 = &var_50
            
            if (var_48 != 0)
                rcx_27 = var_48
            
            int32_t rax_44 = *(rcx_27 + ((sx.q(var_40 - 1) & r8_7) << 2))
            
            if (rax_44 == 0xffffffff)
            label_140cb8193_1:
                rax_45 = nullptr
            else
                int64_t r9_6 = var_88
                int64_t rcx_29
                
                while (true)
                    rcx_29 = sx.q(rax_44) * 2
                    
                    if (*(r9_6 + (rcx_29 << 3)) == r8_7.d)
                        break
                    
                    rax_44 = *(r9_6 + (rcx_29 << 3) + 8)
                    
                    if (rax_44 == 0xffffffff)
                        goto label_140cb8193_2
                
                rax_45 = r9_6 + (rcx_29 << 3)
                
                if (rax_44 == 0xffffffff)
                label_140cb8193_2:
                    rax_45 = nullptr
        
        uint32_t rcx_32 = (r8_7 << 3 u>> 0xa).d
        int32_t var_d0_1 = rcx_32 * *(rax_45 + 4)
        uint32_t var_d8_1 = rcx_32
        sub_140b1f700(arg1, u"\t%d\t\t(%d Items @ %d KB = %d KB)", r8_7)
        rbx_5 = &rbx_5[1]
        rdi_6 += 1
    while (rdi_6 != rsi_6)

if (r14_1 != 0)
    sub_140a74f90(r14_1)

int32_t var_40_1 = 0

if (var_48 != 0)
    sub_140a74f90(var_48)

var_80 = 0
int32_t var_58_1 = 0xffffffff
int32_t var_54_1 = 0
void* result = sub_14059a8e0(&var_78, 0)
int64_t var_68

if (var_68 != 0)
    result = sub_140a74f90(var_68)

int64_t rcx_39 = var_88

if (rcx_39 != 0)
    result = sub_140a74f90(rcx_39)

int64_t rcx_40 = var_c0

if (rcx_40 != 0)
    result = sub_140a74f90(rcx_40)

__security_check_cookie(rax_1 ^ &var_f8)
return result
