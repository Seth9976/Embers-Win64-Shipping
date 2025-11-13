// 函数: sub_14261e920
// 地址: 0x14261e920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
int64_t i_7 = 0
uint64_t rbx
uint64_t arg_8 = rbx
int32_t i_15 = arg4
int32_t rcx = 0

if (arg4 s> 0)
    int16_t* r8 = arg3 + 0x18
    
    do
        int16_t rax_2 = rcx.w + 1
        rcx += 1
        *r8 = rax_2
        r8 = &r8[0x10]
    while (rcx s< i_15)

int64_t i_8
int64_t j_4

if (arg5 s> 0)
    i_8 = 0
    int32_t i_9 = 0
    sub_142616290(&i_8, 0x20)
    j_4 = 0
    int32_t var_270_1 = 0
    sub_142616290(&j_4, 0x20)
    int32_t var_294_1 = 0
    int32_t rsi_1 = 0
    
    if (i_15 s> 0)
        void* r12_1 = arg3 + 0x1b
        void* var_268_1 = r12_1
        
        do
            if ((*r12_1 & 4) == 0 && *(r12_1 - 0xb) != 0)
                rbx.b = 0
                char var_298_1 = 0
                int32_t rdi_1 = 0
                sub_142616290(&i_8, 0)
                sub_142616290(&j_4, 0)
                *r12_1 |= 4
                sub_142616290(&i_8, i_9 + 1)
                *(i_8 + (sx.q(i_9 - 1) << 2)) = rsi_1
                int32_t i = i_9
                bool cond:1_1 = i s<= 0
                
                if (i != 0)
                    char r12_2 = 0
                    
                    do
                        if (not(cond:1_1))
                            i -= 1
                            i_9 = i
                        
                        int64_t rbx_1 = sx.q(*(i_8 + (sx.q(i) << 2)))
                        void* r15_2 = (rbx_1 << 5) + arg3
                        rdi_1 += *(r15_2 + 0x10)
                        r12_2 |= *(r15_2 + 0x1b) u>> 1 & 1
                        sub_142616290(&j_4, var_270_1 + 1)
                        int32_t j = 0
                        *(j_4 + (sx.q(var_270_1 - 1) << 2)) = rbx_1.d
                        
                        if (*(r15_2 + 8) s> 0)
                            void* rdi_2 = nullptr
                            
                            do
                                void* rbx_4 = (sx.q(*(rdi_2 + *r15_2)) << 5) + arg3
                                
                                if ((*(rbx_4 + 0x1b) & 4) == 0)
                                    int16_t r14 = *(rbx_4 + 0x18)
                                    
                                    if (r14 != 0)
                                        sub_142616290(&i_8, i_9 + 1)
                                        *(i_8 + (sx.q(i_9 - 1) << 2)) = zx.d(r14) - 1
                                        *(rbx_4 + 0x1b) |= 4
                                
                                j += 1
                                rdi_2 += 4
                            while (j s< *(r15_2 + 8))
                            
                            i_7 = 0
                        
                        i = i_9
                        cond:1_1 = i s<= 0
                    while (i != 0)
                    
                    rsi_1 = var_294_1
                    i_15 = arg4
                    rbx = zx.q(r12_2)
                    r12_1 = var_268_1
                
                if (rdi_1 s< arg5 && rbx.b == 0)
                    int32_t r8_1 = 0
                    
                    if (var_270_1 s> 0)
                        int64_t rdx_8 = 0
                        
                        do
                            rdx_8 += 4
                            r8_1 += 1
                            *((sx.q(*(rdx_8 + j_4 - 4)) << 5) + arg3 + 0x10) = 0
                            *((sx.q(*(rdx_8 + j_4 - 4)) << 5) + arg3 + 0x18) = 0
                        while (r8_1 s< var_270_1)
            
            rsi_1 += 1
            r12_1 += 0x20
            var_294_1 = rsi_1
            var_268_1 = r12_1
        while (rsi_1 s< i_15)
    
    sub_142609160(j_4)
    sub_142609160(i_8)

int64_t i_13 = sx.q(i_15)
int64_t var_268_2 = i_13

if (i_13 s> 0)
    void* r9 = arg3 + 8
    i_8 = i_13
    void* rsi_2 = r9
    int64_t i_1
    
    do
        int16_t rdi_3 = *(rsi_2 + 0x10)
        
        if (rdi_3 != 0)
            int64_t j_7 = sx.q(*rsi_2)
            uint32_t r8_2 = -1
            uint32_t var_280_2 = 0xffffffff
            int32_t rdx_9 = 0
            int32_t var_294_2 = 0
            j_4 = j_7
            
            if (j_7 s> 0)
                int16_t* r12_3 = *(rsi_2 - 8)
                int64_t j_1
                
                do
                    void* rcx_20 = (zx.q(*r12_3) << 5) + arg3
                    int16_t r11_1 = *(rcx_20 + 0x18)
                    
                    if (rdi_3 != r11_1 && *(rsi_2 + 0x12) == *(rcx_20 + 0x1a)
                            && *(rsi_2 + 0xc) == *(rcx_20 + 0x14))
                        int32_t r15_3 = *(rcx_20 + 0x10)
                        
                        if (r15_3 s> rdx_9)
                            int64_t k_1 = var_268_2
                            int32_t rdx_10 = 0
                            void* r10_1 = r9
                            int64_t k
                            
                            do
                                if (*(r10_1 + 0x10) == rdi_3)
                                    int64_t r9_1 = sx.q(*r10_1)
                                    
                                    if (r9_1 s> 0)
                                        int32_t* r8_3 = *(r10_1 - 8)
                                        int64_t temp11_1
                                        
                                        do
                                            int32_t rcx_21 = rdx_10 + 1
                                            int64_t rax_20 = sx.q(*r8_3) << 5
                                            r8_3 = &r8_3[1]
                                            
                                            if (*(rax_20 + arg3 + 0x18) != r11_1)
                                                rcx_21 = rdx_10
                                            
                                            rdx_10 = rcx_21
                                            temp11_1 = r9_1
                                            r9_1 -= 1
                                        while (temp11_1 != 1)
                                
                                r10_1 += 0x20
                                k = k_1
                                k_1 -= 1
                            while (k != 1)
                            r9 = arg3 + 8
                            
                            if (rdx_10 != 1)
                                rdx_9 = var_294_2
                                r8_2 = var_280_2
                            else
                                r8_2 = zx.d(*r12_3)
                                rdx_9 = r15_3
                                var_294_2 = rdx_9
                                var_280_2 = r8_2
                    
                    r12_3 = &r12_3[2]
                    j_1 = j_4
                    j_4 -= 1
                while (j_1 != 1)
                i_13 = var_268_2
                
                if (r8_2 != 0xffffffff)
                    int16_t rdx_11 = *(rsi_2 + 0x10)
                    int64_t j_5 = i_13
                    int16_t r8_4 = *((sx.q(r8_2) << 5) + arg3 + 0x18)
                    void* rax_23 = arg3 + 0x18
                    int64_t j_2
                    
                    do
                        if (*rax_23 == rdx_11)
                            *rax_23 = r8_4
                        
                        rax_23 += 0x20
                        j_2 = j_5
                        j_5 -= 1
                    while (j_2 != 1)
        
        rsi_2 += 0x20
        i_1 = i_8
        i_8 -= 1
    while (i_1 != 1)

uint64_t i_14 = zx.q(arg4)
int16_t rbx_5 = 0

if (i_14.d s>= 0x100)
    if (i_13 s> 0)
        void* rax_26 = arg3 + 0x1b
        int64_t i_10 = i_13
        int64_t i_2
        
        do
            *rax_26 |= 1
            rax_26 += 0x20
            i_2 = i_10
            i_10 -= 1
        while (i_2 != 1)
    
    if (i_14.d s> 0)
        int64_t r9_2 = 0
        void* r8_5 = arg3 + 0x1b
        uint64_t i_12 = i_14
        uint64_t i_3
        
        do
            if ((*r8_5 & 1) != 0)
                int16_t rdx_14 = *(r8_5 - 3)
                
                if (rdx_14 != 0)
                    rbx_5 += 1
                    
                    if (r9_2 s< i_13)
                        void* rax_27 = r8_5
                        int64_t j_6 = i_13 - r9_2
                        int64_t j_3
                        
                        do
                            if (*(rax_27 - 3) == rdx_14)
                                *rax_27 &= 0xfe
                                *(rax_27 - 3) = rbx_5
                            
                            rax_27 += 0x20
                            j_3 = j_6
                            j_6 -= 1
                        while (j_3 != 1)
            
            r9_2 += 1
            r8_5 += 0x20
            i_3 = i_12
            i_12 -= 1
        while (i_3 != 1)
else
    int16_t var_248[0x48]
    memset(&var_248, 0, 0x200)
    int64_t i_5 = 1
    
    if (i_13 s> 0)
        void* rdx_12 = arg3 + 0x18
        int64_t i_11 = i_13
        int64_t i_4
        
        do
            uint64_t rax_24 = zx.q(*rdx_12)
            rdx_12 += 0x20
            var_248[rax_24] = 1
            i_4 = i_11
            i_11 -= 1
        while (i_4 != 1)
    
    var_248[0] = 0
    
    do
        if (var_248[i_5] != 0)
            rbx_5 += 1
            var_248[i_5] = rbx_5
        
        i_5 += 1
    while (i_5 s< 0x100)
    
    if (i_13 s> 0)
        void* rdx_13 = arg3 + 0x18
        int64_t i_6
        
        do
            uint64_t rax_25 = zx.q(*rdx_13)
            rdx_13 += 0x20
            *(rdx_13 - 0x20) = var_248[rax_25]
            i_6 = i_13
            i_13 -= 1
        while (i_6 != 1)

void* rax_28 = *arg2
arg2[1].w = rbx_5
uint32_t result = zx.d(*(rax_28 + 0x30))
int32_t rcx_26 = zx.d(*(rax_28 + 0x32)) * result

if (rcx_26 s> 0)
    do
        int64_t rax_29 = arg2[5]
        result = zx.d(*(rax_29 + (i_7 << 1)))
        
        if (result.w != 0xffff)
            result = zx.d(*((zx.q(result.w) << 5) + arg3 + 0x18))
            *(rax_29 + (i_7 << 1)) = result.w
        
        i_7 += 1
    while (i_7 s< sx.q(rcx_26))

__security_check_cookie(rax_1 ^ &var_2b8)
return result
