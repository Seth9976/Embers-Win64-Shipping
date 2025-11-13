// 函数: sub_14149fa60
// 地址: 0x14149fa60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg1
void* r12 = arg2
int32_t rbx = *(arg2 + 0x3b0)
TEB* gsbase
uint64_t result = zx.q(*(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))

if (data_143ee1c08 s> result.d)
    int64_t r8_9
    result, r8_9 = _Init_thread_header(&data_143ee1c08)
    
    if (data_143ee1c08 == 0xffffffff)
        int64_t* rcx_29 = data_143db18d0
        
        if (rcx_29 == 0)
            sub_140a53c40()
            rcx_29 = data_143db18d0
        
        r8_9.b = 1
        int64_t* rax_31 = (*(*rcx_29 + 0xb0))(rcx_29, u"r.Shadow.EnableModulatedSelfShadow", r8_9)
        
        if (rax_31 != 0)
            int64_t rdx_15 = *rax_31
            rax_31 = (*(rdx_15 + 0x58))(rax_31, rdx_15)
        
        data_143ee1c00 = rax_31
        result = _Init_thread_footer(&data_143ee1c08)

int32_t rdx = *(rsi + 0x570)
uint64_t r13

if (test_bit(rdx, 0xc) || rbx s>= 3)
    r13.b = 0
else
    result = data_143ee1c00
    
    if (*(result + 4) != 0)
        r13.b = 0
    else
        result = *(rsi + 0x5c0)
        void* rcx = *(result + 0x20)
        
        if (rcx == 0 || (*(rcx + 0x13a) & 0x10) == 0)
            r13.b = 0
        else
            r13.b = 1

char arg_18 = r13.b

if ((rdx & 0x1800) != 0 || r13.b != 0)
    int32_t rdx_1 = *(r12 + 0xa8)
    void* rdi_1 = rsi + 0x850
    *(rdi_1 + 0x38) = 0
    
    if (*(rdi_1 + 0x3c) != rdx_1)
        result = sub_14149c910(rdi_1, rdx_1)
    
    int32_t i = 0
    int32_t i_1 = 0
    
    if (*(r12 + 0xa8) s> 0)
        int64_t rcx_2 = 0
        int64_t var_188_1 = 0
        
        do
            int64_t rbx_1 = sx.q(*(rdi_1 + 0x38))
            int64_t var_e8_1 = 0
            void* r14_2 = *(r12 + 0xa0) + rcx_2
            int32_t rax_1 = (rbx_1 + 1).d
            *(rdi_1 + 0x38) = rax_1
            
            if (rax_1 s> *(rdi_1 + 0x3c))
                sub_14149c530(rdi_1, rbx_1.d)
            
            void* rax_2 = *(rdi_1 + 0x30)
            int64_t rcx_4 = rbx_1 * 3
            void* rdx_3 = rdi_1
            
            if (rax_2 != 0)
                rdx_3 = rax_2
            
            *(rdx_3 + (rcx_4 << 3)) = 0
            *(rdx_3 + (rcx_4 << 3) + 8) = 0
            *(rdx_3 + (rcx_4 << 3) + 0x10) = var_e8_1
            void* rdx_4 = rdi_1
            void* rax_4 = *(rdi_1 + 0x30)
            int64_t var_110
            __builtin_memset(&var_110, 0, 0x18)
            
            if (rax_4 != 0)
                rdx_4 = rax_4
            
            int64_t var_f8_1 = 0
            void* rax_6 = rdx_4 + sx.q(i) * 0x18
            void* var_148_1 = rax_6
            void* var_140_1 = rsi + 0x8a8
            void* var_138_1 = rsi + 0x8f0
            int64_t rax_9 = data_1439b59c0
            void** const var_158 = &data_142f11938
            int64_t var_128 = rax_9
            void* var_150_1 = rsi + 0x890
            int64_t rax_10
            
            if (r13.b == 0)
                rax_10 = data_1439b7008
                int32_t var_f0_2 = 1
            else
                rax_10 = data_1439b6ff0
                int32_t var_f0_1 = 0
            
            int64_t var_120_1 = rax_10
            char var_1a8_1 = 0
            void** var_c8
            sub_1410ea4f0(&var_c8, *(r12 + 8), r14_2, &var_128, 0, 2, 0, &var_158)
            int32_t rax_11 = *(rsi + 0x570)
            int64_t r13_1 = 0
            void* rcx_12 = (((zx.q(rax_11) & 0x800) | 0x30400) u>> 7) + rsi
            void* var_178_1 = rcx_12
            int64_t r15_1 = sx.q(*(rcx_12 + 8))
            int64_t var_180_1 = r15_1
            float entry_zmm3
            
            if (r15_1 s> 0)
                void* rdx_6 = r14_2 + 0x15b8
                
                do
                    void* r9_2 = rdx_6
                    void* rsi_1 = *(*rcx_12 + (r13_1 << 3))
                    void* rax_13 = *(rdx_6 + 0x10)
                    int64_t r8_2 = sx.q(*(rsi_1 + 0x110))
                    
                    if (rax_13 != 0)
                        r9_2 = rax_13
                    
                    int32_t rax_14 = r8_2.d
                    
                    if (r8_2.d s< 0)
                        rax_14 = (r8_2 + 0x1f).d
                    
                    if (test_bit(*(r9_2 + (sx.q(rax_14 s>> 5) << 2)), r8_2.d & 0x1f))
                        void* r12_3 = (r8_2 << 4) + *(r14_2 + 0x1658)
                        char rcx_15 = (*(r12_3 + 8)).b
                        
                        if ((rcx_15 & 0x81) == 0x81)
                            int32_t j = 0
                            
                            if (*(rsi_1 + 0x50) s> 0)
                                int64_t rdi_2 = 0
                                
                                do
                                    void* rax_19 = *(r14_2 + 0x1678)
                                    void* r8_3 = r14_2 + 0x1668
                                    void* rdx_9 = *(rsi_1 + 0x48) + rdi_2
                                    
                                    if (rax_19 != 0)
                                        r8_3 = rax_19
                                    
                                    int32_t rcx_16 = *(rdx_9 + 0xa8)
                                    int32_t rax_20 = rcx_16
                                    
                                    if (rcx_16 s< 0)
                                        rax_20 = rcx_16 + 0x1f
                                    
                                    if (test_bit(*(r8_3 + (sx.q(rax_20 s>> 5) << 2)), 
                                            rcx_16 & 0x1f))
                                        int64_t r8_4
                                        
                                        if ((*(rdx_9 + 0x9c) & 0x100000) == 0)
                                            r8_4 = -1
                                        else
                                            r8_4 =
                                                *(*(r14_2 + 0x16d8) + (sx.q(*(rdx_9 + 0xac)) << 3))
                                        
                                        var_1a8_1.d = 0xffffffff
                                        entry_zmm3 = sub_1410ecfd0(&var_c8, rdx_9, r8_4, 
                                            *(*(rdx_9 + 0xa0) + 8), entry_zmm3, 0xffffffff)
                                    
                                    j += 1
                                    rdi_2 += 0xb0
                                while (j s< *(rsi_1 + 0x50))
                                
                                rcx_15 = (*(r12_3 + 8)).b
                                r15_1 = var_180_1
                        
                        if ((rcx_15 & 0x82) == 0x82)
                            void var_168
                            sub_14141f310(r14_2, &var_168, *(rsi_1 + 0x110))
                            int32_t var_164
                            int64_t rbx_2 = sx.q(var_164)
                            int32_t j_1
                            
                            if (rbx_2.d s< j_1)
                                void** rdi_4 = rbx_2 * 0x18
                                
                                do
                                    int64_t rax_25 = *(r14_2 + 0x1d70)
                                    var_1a8_1.d = 0xffffffff
                                    entry_zmm3 = sub_1410ecfd0(&var_c8, *(rdi_4 + rax_25), -1, 
                                        *(rdi_4 + rax_25 + 8), entry_zmm3, 0xffffffff)
                                    rbx_2 = zx.q(rbx_2.d + 1)
                                    rdi_4 = &rdi_4[3]
                                while (rbx_2.d s< j_1)
                    
                    rcx_12 = var_178_1
                    rdx_6 = r14_2 + 0x15b8
                    r13_1 += 1
                while (r13_1 s< r15_1)
                
                rsi = arg1
                r12 = arg2
                rax_11 = *(rsi + 0x570)
            
            r13 = zx.q(arg_18)
            
            if (test_bit(rax_11, 0xc) && not(test_bit(rax_11, 0xb)) && r13.b == 0)
                int32_t j_2 = 0
                
                if (*(rsi + 0x660) s> 0)
                    void** rbx_3 = nullptr
                    
                    do
                        void* rdx_12 = *(rbx_3 + *(rsi + 0x658))
                        int64_t r8_6
                        
                        if ((*(rdx_12 + 0x9c) & 0x100000) == 0)
                            r8_6 = -1
                        else
                            r8_6 = *(*(r14_2 + 0x16d8) + (sx.q(*(rdx_12 + 0xac)) << 3))
                        
                        var_1a8_1.d = 0xffffffff
                        entry_zmm3 = sub_1410ecfd0(&var_c8, rdx_12, r8_6, *(*(rdx_12 + 0xa0) + 8), 
                            entry_zmm3, 0xffffffff)
                        j_2 += 1
                        rbx_3 = &rbx_3[1]
                    while (j_2 s< *(rsi + 0x660))
            
            var_1a8_1.q = rsi + 0x8f0
            sub_14125f360(r14_2, rax_6, rsi + 0x890, rsi + 0x8a8, var_1a8_1)
            int32_t rax_30
            bool cond:2_1
            
            if (*(r14_2 + 0xd7a) != 0 && *(r14_2 + 0xd7b) == 0)
                cond:2_1 = sub_142391f10(r14_2) != 0
                rax_30 = 2
            
            if (*(r14_2 + 0xd7a) == 0 || *(r14_2 + 0xd7b) != 0 || not(cond:2_1))
                rax_30 = 1
            
            var_1a8_1.d = rax_30
            result, entry_zmm3 =
                sub_1412c7690(*(r12 + 0x3b0), rax_6, rsi + 0x890, rax_6 + 0x10, var_1a8_1)
            rdi_1 = rsi + 0x850
            rcx_2 = var_188_1 + 0x5240
            i = i_1 + 1
            var_188_1 = rcx_2
            i_1 = i
        while (i s< *(r12 + 0xa8))

return result
