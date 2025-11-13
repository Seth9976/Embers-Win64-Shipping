// 函数: sub_1418f8db0
// 地址: 0x1418f8db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_4 = 0
int32_t r15 = 0
void* rcx = *(arg1 + 0x48)
char rax = (*(rcx + 0x1af0)).b
int32_t* var_58
int64_t var_50

if ((rax & 0x10) != 0)
    int32_t i_7 = *arg2
    void* r10_1 = &arg2[1]
    
    if (i_7 != 0)
        uint64_t i_6 = zx.q(i_7)
        uint64_t i
        
        do
            if (*(arg1 + 0x60) - *(arg1 + 0x8c) != 0)
                void* r8_1 = arg1 + 0x90
                void* rdx = *(r8_1 + 8)
                int64_t r9_1 = sx.q(*r10_1)
                
                if (rdx != 0)
                    r8_1 = rdx
                
                int32_t j = *(r8_1 + (((sx.q(*(arg1 + 0xa0)) - 1) & r9_1) << 2))
                
                if (j != 0xffffffff)
                    int64_t rdx_1 = *(arg1 + 0x58)
                    
                    do
                        int64_t rcx_5 = sx.q(j) << 5
                        
                        if (*(rcx_5 + rdx_1) == r9_1.d)
                            break
                        
                        j = *(rcx_5 + rdx_1 + 0x18)
                    while (j != 0xffffffff)
            
            r10_1 += 4
            i = i_6
            i_6 -= 1
        while (i != 1)
else if ((rax & 0x20) != 0)
    i_4 = 0
    int64_t* rax_1 = *(rcx + 0x1558)
    int32_t* rsi_1 = nullptr
    var_58 = nullptr
    var_50 = 0
    int64_t r14_1 = *rax_1
    data_143efbb48(r14_1, &i_4, 0)
    int32_t i_5 = i_4
    
    if (i_5 != 0)
        var_50.d = i_5
        
        if (i_5 s> 0)
            sub_1409da320(&var_58)
            rsi_1 = var_58
        
        int32_t* rax_2 = rsi_1
        
        if (i_5 != 0)
            int32_t i_1
            
            do
                *rax_2 = 0x3b9deeb0
                __builtin_memset(&rax_2[1], 0, 0x1c)
                rax_2 = &rax_2[8]
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
        
        data_143efbb48(r14_1, &i_4, rsi_1)
        int32_t i_8 = i_4
        int32_t r10_2 = 0
        
        if (i_8 != 0)
            do
                int64_t r9_2 = sx.q(rsi_1[sx.q(r10_2) * 8 + 6])
                
                if (*(arg1 + 0x60) - *(arg1 + 0x8c) != 0)
                    void* r8_3 = arg1 + 0x90
                    void* rcx_9 = *(r8_3 + 8)
                    
                    if (rcx_9 != 0)
                        r8_3 = rcx_9
                    
                    int32_t i_2 = *(r8_3 + (((sx.q(*(arg1 + 0xa0)) - 1) & r9_2) << 2))
                    
                    if (i_2 != 0xffffffff)
                        int64_t rdx_8 = *(arg1 + 0x58)
                        
                        do
                            int32_t* rcx_11 = sx.q(i_2) << 5
                            
                            if (*(rcx_11 + rdx_8) == r9_2.d)
                                break
                            
                            i_2 = *(rcx_11 + rdx_8 + 0x18)
                        while (i_2 != 0xffffffff)
                
                r10_2 += 1
            while (r10_2 u< i_8)
        
        sub_140b19e60()
        void* rdx_9 = data_1439a8bd0
        (*(rdx_9 + 0x50))(&data_1439a8bd0, rdx_9)
        sub_140b19e60()
        void* rdx_10 = data_1439a8bd0
        (*(rdx_10 + 0x18))(&data_1439a8bd0, rdx_10)
        
        if (rsi_1 != 0)
            sub_140a74f90(rsi_1)

void* result = *(arg1 + 0x48)

if ((*(result + 0x1af0) & 0x30) != 0)
    return result

i_4 = 0

if (*(arg1 + 0xb0) s> 0)
    void* r9_3 = nullptr
    int32_t* r12_1 = var_58
    int64_t var_68
    int64_t r13_1 = var_68
    void* arg_18 = nullptr
    int32_t i_3
    
    do
        int32_t* rdx_14
        
        if (*(arg1 + 0x60) == *(arg1 + 0x8c))
        label_1418f903e:
            rdx_14 = nullptr
        else
            void* r8_4 = arg1 + 0x90
            void* rdx_11 = *(r8_4 + 8)
            int64_t r9_4 = sx.q(*(r9_3 + *(arg1 + 0xa8)))
            
            if (rdx_11 != 0)
                r8_4 = rdx_11
            
            int32_t rax_7 = *(r8_4 + (((sx.q(*(arg1 + 0xa0)) - 1) & r9_4) << 2))
            
            if (rax_7 == 0xffffffff)
            label_1418f903e_1:
                rdx_14 = nullptr
            else
                while (true)
                    rdx_14 = (sx.q(rax_7) << 5) + *(arg1 + 0x58)
                    
                    if (*rdx_14 == r9_4.d)
                        break
                    
                    rax_7 = rdx_14[6]
                    
                    if (rax_7 == 0xffffffff)
                        goto label_1418f903e_2
                
                if (rax_7 == 0xffffffff)
                label_1418f903e_2:
                    rdx_14 = nullptr
        
        void* rax_8 = &rdx_14[2]
        
        if (rdx_14 == 0)
            rax_8 = nullptr
        
        int64_t* r14_2
        
        if (rax_8 == 0)
            var_68 = 0
            int32_t var_60_1 = 0
            r15 |= 2
            sub_1405947f0(&var_68, 0xc)
            int32_t rax_9 = var_60_1 + 0xc
            var_60_1 = rax_9
            
            if (rax_9 s> 0)
                sub_140594770(&var_68)
            
            r13_1 = var_68
            UnDecorator::getReferenceType(r13_1, u"<undefined>", 0x18)
            r14_2 = &var_68
        else
            int32_t rdi_3 = *(rax_8 + 8)
            r15 |= 1
            int64_t rsi_2 = *rax_8
            r12_1 = nullptr
            var_58 = nullptr
            var_50.d = rdi_3
            
            if (rdi_3 != 0)
                sub_1405a4c70(&var_58, rdi_3, 0)
                r12_1 = var_58
                memcpy(r12_1, rsi_2, rdi_3 * 2)
                r14_2 = &var_58
            else
                var_50:4.d = 0
                r14_2 = &var_58
        
        int32_t rsi_3 = r14_2[1].d
        uint64_t var_48 = 0
        uint64_t rdi_4 = 0
        int32_t var_40_1 = rsi_3
        
        if (rsi_3 != 0)
            sub_1405a4c70(&var_48, rsi_3, 0)
            rdi_4 = var_48
            memcpy(rdi_4, *r14_2, rsi_3 * 2)
        else
            int32_t var_3c_1 = 0
        
        if ((r15.b & 2) != 0)
            r15 &= 0xfffffffd
            
            if (r13_1 != 0)
                sub_140a74f90(r13_1)
        
        if ((r15.b & 1) != 0)
            r15 &= 0xfffffffe
            
            if (r12_1 != 0)
                sub_140a74f90(r12_1)
        
        if (rdi_4 != 0)
            sub_140a74f90(rdi_4)
        
        i_3 = i_4 + 1
        r9_3 = arg_18 + 4
        i_4 = i_3
        arg_18 = r9_3
    while (i_3 s< *(arg1 + 0xb0))

sub_140b19e60()
void* rdx_20 = data_1439a8bd0
(*(rdx_20 + 0x50))(&data_1439a8bd0, rdx_20)
sub_140b19e60()
void* rdx_21 = data_1439a8bd0
return (*(rdx_21 + 0x18))(&data_1439a8bd0, rdx_21)
