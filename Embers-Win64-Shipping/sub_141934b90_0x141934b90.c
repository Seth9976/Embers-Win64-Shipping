// 函数: sub_141934b90
// 地址: 0x141934b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx
int64_t arg_20 = rbx
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t r13 = sx.q(arg2)
void* r8 = arg1
int32_t var_a0 = r13.d
TEB* gsbase

if (data_143eff920 s> *(*(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14))
    _Init_thread_header(&data_143eff920)
    
    if (data_143eff920 == 0xffffffff)
        int32_t r9_6 = data_1439c7494
        int32_t r8_14 = data_1439c749c
        int32_t rdx_49 = data_1439c74a0
        data_143eff908 = r9_6
        data_143eff910 = r8_14 + r9_6
        int32_t rdx_51 = rdx_49 + data_1439c74a4 + r8_14
        data_143eff914 = rdx_49 + r8_14 + r9_6
        data_143eff918 = rdx_51 + r9_6
        _Init_thread_footer(&data_143eff920)
    
    r8 = arg1

int64_t var_50 = 0
int16_t var_48 = 0
uint64_t rax_4 = zx.q(r13.b)

if (rax_4.d u> 5)
    rax_4.b = 0
else
    switch (rax_4)
        case 0
            rax_4.b = 0x76
        case 1
            rax_4.b = 0x70
        case 2
            rax_4.b = 0x67
        case 3
            rax_4.b = 0x68
        case 4
            rax_4.b = 0x64
        case 5
            rax_4.b = 0x63

var_50.b = rax_4.b
int32_t rax_5

if (data_143eff5c6 == 0)
    rax_5 = *(r8 + 0x5e8)
else
    rax_5 = *(r13 * 0xb8 + r8 + 0xb0)

int32_t r14 = 0
void* r12 = nullptr
void* var_88 = nullptr
int32_t rdi = 0
int32_t var_7c = 0
int32_t r15 = 0
var_50:1.w = 0x5f75
int64_t rsi
rsi.b = 0
var_50:4.b = 0

do
    uint32_t rcx_3 = zx.d(rsi.b)
    
    if (rsi.b == 0)
        rbx.b = 0x68
    else if (rcx_3 == 1)
        rbx.b = 0x6d
    else if (rcx_3 == 2)
        rbx.b = 0x6c
    else if (rcx_3 == 3)
        rbx.b = 0x69
    else if (rcx_3 == 4)
        rbx.b = 0x75
    else
        rbx.b = 0
    
    var_50:3.b = rbx.b
    int32_t rax_6 = data_143effe00(zx.q(rax_5), &var_50)
    
    if (rax_6 != 0xffffffff)
        char var_94_1 = rbx.b
        rbx = sx.q(rdi)
        char var_93_1 = rsi.b
        rdi = (rbx + 1).d
        
        if (rdi s> r15)
            sub_1405a4d70(&var_88)
            r15 = var_7c
            r12 = var_88
        
        *(r12 + (rbx << 3)) = rax_6.q
    
    rsi.b += 1
while (rsi.b u< 5)

int64_t r13_2 = sx.q(var_a0)
void* rsi_2 = r13_2 * 0xb8 + arg1
void* r15_4 = r13_2 * 0x30 + arg1
var_88 = r15_4
int32_t rdx_3 = *(rsi_2 + 0x18)
int32_t var_98
var_98.q = rsi_2
*(r15_4 + 0x4d0) = 0

if (*(r15_4 + 0x4d4) != rdx_3)
    sub_1405c5570(r15_4 + 0x4c8, rdx_3)

int32_t i = 0

if (*(rsi_2 + 0x18) s> 0)
    int64_t r15_5 = 0
    
    do
        int32_t var_a0_1 = 0xffffffff
        int32_t rcx_10 = 0
        char var_9b_1 = 5
        char rdx_4 = *(r15_5 + *(rsi_2 + 0x10) + 2)
        char var_9c_1 = rdx_4
        
        if (rdi s> 0)
            void* rax_9 = r12
            
            do
                if (*(rax_9 + 4) == rdx_4)
                    var_a0_1.q = *rax_9
                    break
                
                rcx_10 += 1
                rax_9 += 8
            while (rcx_10 s< rdi)
        
        int64_t rsi_3 = sx.q(*(r15_4 + 0x4d0))
        int32_t rax_11 = (rsi_3 + 1).d
        *(r15_4 + 0x4d0) = rax_11
        
        if (rax_11 s> *(r15_4 + 0x4d4))
            sub_1405a4d70(r15_4 + 0x4c8)
        
        i += 1
        r15_5 += 4
        *(*(r15_4 + 0x4c8) + (rsi_3 << 3)) = var_a0_1.q
        rsi_2 = var_98.q
    while (i s< *(rsi_2 + 0x18))
    
    r15_4 = var_88

if (r12 != 0)
    sub_140a74f90(r12)

void** r12_1 = var_98.q
int64_t rbx_2 = sx.q(*(r15_4 + 0x4e0))
var_50:1.d = 0x63
var_50:5.w = 0
uint32_t rdx_7 = zx.d(*(r12_1 + 0x9b))

if (rdx_7 s> rbx_2.d)
    *(r15_4 + 0x4e0) = rdx_7
    
    if (rdx_7 s> *(r15_4 + 0x4e4))
        sub_1405a4f90(r15_4 + 0x4d8)
    
    memset((rbx_2 << 4) + *(r15_4 + 0x4d8), 0, sx.q(rdx_7 - rbx_2.d) << 4)
else if (rdx_7 s< rbx_2.d)
    sub_140838580(r15_4 + 0x4d8, rdx_7, rbx_2.d - rdx_7, 1)

int32_t rax_13 = r12_1[1].d
int32_t r13_3 = 0

if (rax_13 s> 0)
    int64_t rcx_18 = 0
    void* r14_1 = r15_4 + 0x4d8
    int64_t var_58_1 = 0
    
    do
        void* r12_2 = &var_50:2
        int64_t* r15_7 = *r12_1 + rcx_18
        int64_t* rsi_6 = *r14_1 + rcx_18
        char rdx_11 = (r13_3 s/ 0xa).b
        
        if (r13_3 s>= 0xa)
            var_50:2.b = rdx_11 + 0x30
            r12_2 = &var_50:3
        
        rdi.b = 0
        *r12_2 = r13_3.b - rdx_11 * 0xa + 0x30
        *(r12_2 + 1) = 0x5f
        *(r12_2 + 3) = 0
        
        if (r15_7[1].d s> 0)
            do
                uint64_t rbx_4 = zx.q(rdi.b) << 2
                *(r12_2 + 2) = *(*r15_7 + rbx_4 + 2)
                int32_t rax_21 = data_143effe00(zx.q(rax_5), &var_50)
                int64_t rcx_21 = *r15_7
                char var_6c_1 = *(rcx_21 + rbx_4 + 2)
                int64_t rbx_5 = sx.q(rsi_6[1].d)
                char var_6b_1 = *(rcx_21 + rbx_4 + 3)
                int32_t rax_24 = (rbx_5 + 1).d
                rsi_6[1].d = rax_24
                
                if (rax_24 s> *(rsi_6 + 0xc))
                    sub_1405a4d70(rsi_6)
                
                rdi.b += 1
                *(*rsi_6 + (rbx_5 << 3)) = rax_21.q
            while (zx.d(rdi.b) s< r15_7[1].d)
            
            rcx_18 = var_58_1
            r14_1 = r15_4 + 0x4d8
        
        r12_1 = var_98.q
        rcx_18 += 0x10
        r13_3 += 1
        var_58_1 = rcx_18
    while (r13_3 s< rax_13)
    
    r15_4 = var_88
    r14 = 0

uint32_t rdx_14 = zx.d(*(r12_1 + 0x9b))
int32_t rdi_2 = 0
*(r15_4 + 0x4f0) = 0

if (*(r15_4 + 0x4f4) != rdx_14)
    sub_1405dadb0(r15_4 + 0x4e8, rdx_14)
    rdi_2 = *(r15_4 + 0x4f0)

uint64_t rsi_7 = zx.q(*(r12_1 + 0x9b))
int32_t rax_27 = rsi_7.d + rdi_2
*(r15_4 + 0x4f0) = rax_27

if (rax_27 s> *(r15_4 + 0x4f4))
    sub_1405a4cf0(r15_4 + 0x4e8)

uint32_t result = memset(*(r15_4 + 0x4e8) + (sx.q(rdi_2) << 2), 0, rsi_7 << 2)
int32_t rdi_3 = -1
int32_t r15_8 = -1
var_50:1.d = 0x73
int32_t rbx_7 = 0

if (*(r12_1 + 0x9a) u> 0)
    do
        void* rcx_28 = &var_50:2
        char rdx_18 = (rbx_7 s/ 0xa).b
        
        if (rbx_7 s>= 0xa)
            var_50:2.b = rdx_18 + 0x30
            rcx_28 = &var_50:3
        
        *rcx_28 = rbx_7.b - rdx_18 * 0xa + 0x30
        *(rcx_28 + 1) = 0
        int32_t rax_34 = data_143effe00(zx.q(rax_5), &var_50)
        int32_t rcx_30 = rax_34
        
        if (rax_34 != 0xffffffff)
            r15_8 = rbx_7
        label_14193511e:
            
            if (rcx_30 != 0xffffffff)
                if (data_143eff5d4 == 0 || data_143f00398 == 0)
                    if (data_143eff5c6 == 0)
                        data_143effe88()
                    else
                        data_143f00490(zx.q(rax_5), zx.q(rcx_30), 
                            zx.q((&data_143eff908)[r13_2] + rbx_7))
                    
                    int32_t r9_3 = (&data_143eff908)[r13_2] + rbx_7
                    void* rcx_39 = arg1 + 0x5f8
                    void* rax_51 = *(rcx_39 + 0x10)
                    
                    if (rax_51 != 0)
                        rcx_39 = rax_51
                    
                    int32_t rax_52 = r9_3
                    
                    if (r9_3 s< 0)
                        rax_52 = r9_3 + 0x1f
                    
                    void* r8_9 = rcx_39 + (sx.q(rax_52 s>> 5) << 2)
                    *r8_9 |= 1 << (r9_3.b & 0x1f)
                    int32_t rax_55 = *(arg1 + 0x5f0)
                    
                    if (rax_55 s>= r9_3)
                        r9_3 = rax_55
                    
                    *(arg1 + 0x5f0) = r9_3
                else
                    var_88:4.d = rcx_30
                    int64_t rsi_8 = sx.q(*(arg1 + 0x648))
                    var_88.d = (&data_143eff908)[r13_2] + rbx_7
                    int32_t rax_49 = (rsi_8 + 1).d
                    *(arg1 + 0x648) = rax_49
                    
                    if (rax_49 s> *(arg1 + 0x64c))
                        sub_1405a4d70(arg1 + 0x640)
                    
                    *(*(arg1 + 0x640) + (rsi_8 << 3)) = var_88
        else if (r15_8 != rax_34)
            void* rcx_31 = &var_50:2
            char rdx_22 = (r15_8 s/ 0xa).b
            
            if (r15_8 s>= 0xa)
                var_50:2.b = rdx_22 + 0x30
                rcx_31 = &var_50:3
            
            int32_t r8_7 = rbx_7 - r15_8
            *rcx_31 = r15_8.b - rdx_22 * 0xa + 0x30
            *(rcx_31 + 1) = 0
            int64_t rax_40
            rax_40.b = r15_8 s> 9
            *(&var_50:3 + rax_40) = 0x5b
            int64_t rax_41
            rax_41.b = r15_8 s> 9
            void* rcx_32 = &var_50 + rax_41 + 4
            char rdx_25 = (r8_7 s/ 0xa).b
            
            if (r8_7 s>= 0xa)
                *rcx_32 = rdx_25 + 0x30
                rcx_32 += 1
            
            r8_7.b -= rdx_25 * 0xa
            r8_7.b += 0x30
            *rcx_32 = r8_7.b
            *(rcx_32 + 1) = 0x5d
            rcx_30 = data_143effe00(zx.q(rax_5), &var_50)
            goto label_14193511e
        
        result = zx.d(*(r12_1 + 0x9a))
        rbx_7 += 1
    while (rbx_7 s< result)
    
    rdi_3 = -1

int32_t rbx_8 = 0
var_50:1.d = 0x69

if (*(r12_1 + 0x9c) u> 0)
    do
        void* rcx_42 = &var_50:2
        char rdx_34 = (rbx_8 s/ 0xa).b
        
        if (rbx_8 s>= 0xa)
            var_50:2.b = rdx_34 + 0x30
            rcx_42 = &var_50:3
        
        *rcx_42 = rbx_8.b - rdx_34 * 0xa + 0x30
        *(rcx_42 + 1) = 0
        int32_t rax_61 = data_143effe00(zx.q(rax_5), &var_50)
        
        if (rax_61 != 0xffffffff)
            rdi_3 = rbx_8
        label_141935365:
            
            if (rax_61 != 0xffffffff)
                int32_t r9_5 = *((r13_2 << 2) + 0x1439c77d8) + rbx_8
                void* rcx_47 = arg1 + 0x620
                void* rax_75 = *(rcx_47 + 0x10)
                
                if (rax_75 != 0)
                    rcx_47 = rax_75
                
                int32_t rax_76 = r9_5
                
                if (r9_5 s< 0)
                    rax_76 = r9_5 + 0x1f
                
                void* r8_12 = rcx_47 + (sx.q(rax_76 s>> 5) << 2)
                *r8_12 |= 1 << (r9_5.b & 0x1f)
                int32_t rax_79 = *(arg1 + 0x618)
                
                if (rax_79 s>= r9_5)
                    r9_5 = rax_79
                
                *(arg1 + 0x618) = r9_5
        else if (rdi_3 != rax_61)
            void* rcx_44 = &var_50:2
            char rdx_38 = (rdi_3 s/ 0xa).b
            
            if (rdi_3 s>= 0xa)
                var_50:2.b = rdx_38 + 0x30
                rcx_44 = &var_50:3
            
            int32_t r8_11 = rbx_8 - rdi_3
            *rcx_44 = rdi_3.b - rdx_38 * 0xa + 0x30
            *(rcx_44 + 1) = 0
            int64_t rax_67
            rax_67.b = rdi_3 s> 9
            *(&var_50:3 + rax_67) = 0x5b
            int64_t rax_68
            rax_68.b = rdi_3 s> 9
            void* rcx_45 = &var_50 + rax_68 + 4
            char rdx_41 = (r8_11 s/ 0xa).b
            
            if (r8_11 s>= 0xa)
                *rcx_45 = rdx_41 + 0x30
                rcx_45 += 1
            
            r8_11.b -= rdx_41 * 0xa
            r8_11.b += 0x30
            *rcx_45 = r8_11.b
            *(rcx_45 + 1) = 0x5d
            rax_61 = data_143effe00(zx.q(rax_5), &var_50)
            goto label_141935365
        
        result = zx.d(*(r12_1 + 0x9c))
        rbx_8 += 1
    while (rbx_8 s< result)

var_50:1.d = 0x62

if (*(r12_1 + 0x9b) u> 0)
    do
        void* rcx_50 = &var_50:2
        char rdx_46 = (r14 s/ 0xa).b
        
        if (r14 s>= 0xa)
            var_50:2.b = rdx_46 + 0x30
            rcx_50 = &var_50:3
        
        *rcx_50 = r14.b - rdx_46 * 0xa + 0x30
        *(rcx_50 + 1) = 0
        int32_t rax_85 = sub_14193d070(rax_5, &var_50)
        
        if (rax_85 s>= 0)
            sub_14193cec0(rax_5, rax_85, arg3 + r14)
        
        result = zx.d(*(r12_1 + 0x9b))
        r14 += 1
    while (r14 s< result)

__security_check_cookie(rax_1 ^ &var_c8)
return result
