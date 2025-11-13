// 函数: sub_140b50000
// 地址: 0x140b50000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a08
int64_t rax_1 = __security_cookie ^ &var_a08
int32_t i_12 = arg1[1].d
void* rdi = nullptr
int64_t* r12 = arg2
uint64_t i_8 = 0
int32_t i_9 = 0
int64_t* var_9c0 = nullptr
int32_t var_9b4 = 0

if (i_12 s> 0)
    sub_1405c5570(&var_9c0, i_12)
    i_12 = arg1[1].d
    i_8 = zx.q(i_9)

void* var_9d0 = nullptr
void* r15 = nullptr
int64_t var_9c8 = 0

if (i_12 != 0)
    sub_1405dadb0(&var_9d0, i_12)
    r15 = var_9d0

if (i_12 s> 0)
    uint64_t i_6 = zx.q(i_12)
    uint64_t i
    
    do
        int64_t rbx = sx.q(var_9c8.d)
        int32_t rax_2 = (rbx + 1).d
        var_9c8.d = rax_2
        
        if (rax_2 s> var_9c8:4.d)
            sub_1405a4cf0(&var_9d0)
            r15 = var_9d0
        
        void* rcx_3 = r15 + (rbx << 2)
        
        if (rcx_3 != 0)
            *rcx_3 = 0xffffffff
        
        i = i_6
        i_6 -= 1
    while (i != 1)

int32_t rax_3 = arg1[1].d

if (arg3 == 0)
    int32_t i_1 = 0
    
    if (rax_3 s> 0)
        int64_t* rcx_31 = nullptr
        void* r13_2 = r15
        int64_t* var_9a8_2 = nullptr
        int64_t* r15_2 = var_9c0
        
        do
            int64_t rsi_3 = sx.q(i_8.d)
            int64_t rax_18 = *(rcx_31 + *arg1)
            i_8 = zx.q((rsi_3 + 1).d)
            int32_t i_11 = i_8.d
            
            if (i_8.d s> var_9b4)
                sub_1405a4d70(&var_9c0)
                rcx_31 = var_9a8_2
                i_8 = zx.q(i_11)
                r15_2 = var_9c0
            
            rcx_31 = &rcx_31[1]
            r15_2[rsi_3] = rax_18
            *r13_2 = i_1
            i_1 += 1
            r13_2 += 4
            var_9a8_2 = rcx_31
        while (i_1 s< arg1[1].d)
        
        r15 = var_9d0
        r12 = arg2
else
    int64_t var_968 = 0
    int64_t* rcx_4 = nullptr
    void* var_928_1 = nullptr
    int32_t var_960_1 = 0
    int32_t var_93c_1 = 0x80
    int64_t var_958
    __builtin_memset(&var_958, 0, 0x1c)
    int32_t var_938_1 = 0xffffffff
    int32_t var_934_1 = 0
    int32_t var_920_1 = 0
    int32_t i_5 = 0
    
    if (rax_3 s> 0)
        void* var_9a8_1 = r15
        int64_t* r15_1 = var_9c0
        int64_t* var_9a0_1 = nullptr
        int32_t i_2
        
        do
            void* rbx_1 = *(rcx_4 + *arg1)
            void* var_990_1 = rbx_1
            void var_918
            sub_140b2f110(&var_918)
            sub_140b4ad80(&var_918, *(rbx_1 + 0x28), sx.q(*(rbx_1 + 0x30)))
            sub_140b4ad80(&var_918, *(rbx_1 + 0x38), zx.q(*(rbx_1 + 0x40) * 0xc))
            sub_140b4ad80(&var_918, *(rbx_1 + 0x48), zx.q(*(rbx_1 + 0x50) << 4))
            void* rsi_1 = *(rbx_1 + 0x58)
            void* r13_1 = rsi_1 + sx.q(*(rbx_1 + 0x60)) * 0xc
            
            if (rsi_1 != r13_1)
                do
                    int16_t* rax_7 = sub_140b5e5a0(rsi_1)
                    void var_848
                    sub_140b5e660(rax_7, &var_848)
                    sub_140b4ae70(&var_918, &var_848, zx.d(*rax_7) u>> 6)
                    sub_140b4ad80(&var_918, rsi_1 + 8, 4)
                    rsi_1 += 0xc
                while (rsi_1 != r13_1)
                
                rbx_1 = var_990_1
            
            sub_140b39010(&var_918)
            sub_140b3da80(&var_918, rbx_1 + 0x68)
            sub_140b30ae0(&var_918)
            int64_t rsi_2
            
            if (var_960_1 == var_934_1)
            label_140b502a4:
                rsi_2 = sx.q(i_8.d)
                i_8 = zx.q((rsi_2 + 1).d)
                int32_t i_10 = i_8.d
                
                if (i_8.d s> var_9b4)
                    sub_1405a4d70(&var_9c0)
                    i_8 = zx.q(i_10)
                    r15_1 = var_9c0
                
                r15_1[rsi_2] = var_990_1
                int32_t var_978
                sub_1408f1560(&var_968, &var_978)
                char* var_9e0_1 = nullptr
                int64_t* var_970
                *var_970 = *(rbx_1 + 0x68)
                var_970[2].d = *(rbx_1 + 0x78)
                int32_t rax_15 = var_978
                *(var_970 + 0x14) = rsi_2.d
                var_970[3].d = 0xffffffff
                void var_980
                sub_140b4f8e0(&var_968, &var_980, *var_970, var_970, rax_15, var_9e0_1)
            else
                void var_930
                void* rcx_17 = &var_930
                
                if (var_928_1 != 0)
                    rcx_17 = var_928_1
                
                int32_t rax_13 = *(rcx_17 + ((sx.q(var_920_1 - 1) & sx.q(*(rbx_1 + 0x68))) << 2))
                
                if (rax_13 == 0xffffffff)
                    goto label_140b502a4
                
                int64_t r9_1 = var_968
                int64_t r8_7
                
                while (true)
                    r8_7 = sx.q(rax_13)
                    int64_t* rdx_14 = (r8_7 << 5) + r9_1
                    
                    if (*rdx_14 == *(rbx_1 + 0x68) && rdx_14[1] == *(rbx_1 + 0x70)
                            && rdx_14[2].d == *(rbx_1 + 0x78))
                        break
                    
                    rax_13 = rdx_14[3].d
                    
                    if (rax_13 == 0xffffffff)
                        goto label_140b502a4
                
                if (rax_13 == 0xffffffff)
                    goto label_140b502a4
                
                int64_t r8_9 = r8_7 << 5
                void* r8_10 = r8_9 + r9_1
                
                if (r8_9 == neg.q(r9_1) || r8_10 == -0x14)
                    goto label_140b502a4
                
                rsi_2 = zx.q(*(r8_10 + 0x14))
            
            int32_t* rbx_3 = var_9a8_1
            i_2 = i_5 + 1
            rcx_4 = &var_9a0_1[1]
            i_5 = i_2
            *rbx_3 = rsi_2.d
            var_9a0_1 = rcx_4
            var_9a8_1 = &rbx_3[1]
        while (i_2 s< arg1[1].d)
        rcx_4 = var_928_1
        r15 = var_9d0
        r12 = arg2
    
    int32_t var_920_2 = 0
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    var_960_1 = 0
    int32_t var_938_2 = 0xffffffff
    int32_t var_934_2 = 0
    sub_14059a8e0(&var_958, 0)
    int64_t var_948
    
    if (var_948 != 0)
        sub_140a74f90(var_948)
    
    int64_t rcx_30 = var_968
    
    if (rcx_30 != 0)
        sub_140a74f90(rcx_30)

var_9d0 = nullptr
int64_t var_9c8_1 = 0
int32_t temp0 = i_8.d

if (temp0 s> 0)
    var_9c8_1.d = i_8.d
    sub_1405a4cf0(&var_9d0)
    rdi = var_9d0
    memset(rdi, 0, sx.q(i_8.d) << 2)
else if (temp0 s< 0)
    int32_t rax_20 = neg.d(i_8.d)
    
    if (rax_20 != 0)
        int32_t rbx_6 = neg.d(rax_20)
        
        if (rbx_6 != i_8.d)
            memmove(sx.q(i_8.d) << 2, sx.q(rax_20 + i_8.d) << 2, (rbx_6 - i_8.d) << 2)
        
        var_9c8_1.d = rbx_6
        sub_1405dac90(&var_9d0)
        rdi = var_9d0

int64_t* r14

if (i_8.d s<= 0)
    r14 = var_9c0
else
    int64_t* rsi_4 = var_9c0
    void* rbx_7 = rdi
    uint64_t i_7 = zx.q(i_8.d)
    uint64_t i_3
    
    do
        *rbx_7 = sub_140b50690(*rsi_4, r12)
        rbx_7 += 4
        rsi_4 = &rsi_4[1]
        i_3 = i_8
        i_8 -= 1
    while (i_3 != 1)
    r14 = var_9c0
    void* r10_1 = rdi
    int64_t* rbx_8 = r14
    uint64_t i_4
    
    do
        void* rcx_41 = *rbx_8
        
        if (((*(arg1 + 0x3c)).b & 6) != 2)
            int32_t* rax_27 = *(rcx_41 + 0x38)
            void* r9_4 = &rax_27[sx.q(*(rcx_41 + 0x40)) * 3]
            
            while (rax_27 != r9_4)
                uint64_t r8_19 = zx.q(rax_27[2] + *r10_1)
                uint64_t rdx_32 =
                    zx.q(*(rdi + (sx.q(*(r15 + (sx.q(*rax_27) << 2))) << 2)) + rax_27[1])
                rax_27 = &rax_27[3]
                *(r8_19 + *r12) = ((rdx_32 - r8_19) * 2) | 1
        else
            int32_t* r9_3 = *(rcx_41 + 0x38)
            void* r11_1 = &r9_3[sx.q(*(rcx_41 + 0x40)) * 3]
            
            while (r9_3 != r11_1)
                int32_t r8_17 = r9_3[2] + *r10_1
                int32_t rdx_25 = *(rdi + (sx.q(*(r15 + (sx.q(*r9_3) << 2))) << 2)) + r9_3[1]
                r9_3 = &r9_3[3]
                *(sx.q(r8_17) + *r12) = ((rdx_25 - r8_17) * 2) | 1
        
        rbx_8 = &rbx_8[1]
        r10_1 += 4
        i_4 = i_7
        i_7 -= 1
    while (i_4 != 1)

sub_140b4bdd0(r12[2], r12[3].d, arg3)
int64_t result = sub_140b4ba40(r12[4], r12[5].d, arg3)

if (rdi != 0)
    result = sub_140a74f90(rdi)

if (r15 != 0)
    result = sub_140a74f90(r15)

if (r14 != 0)
    result = sub_140a74f90(r14)

__security_check_cookie(rax_1 ^ &var_a08)
return result
