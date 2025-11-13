// 函数: sub_1429af6d0
// 地址: 0x1429af6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1a8 = -2
void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
void* rsi = arg1
int64_t* var_1d0 = arg2
int64_t* var_200 = arg3
int64_t rax_3 = (*(*arg2 + 0x20))(arg2)
int64_t i = 0
int64_t r9 = arg3[1]
int64_t rdx = *arg3
void* var_1a0

if ((r9 - rdx) s>> 3 != 0)
    do
        int64_t* rdi_1 = *(rdx + (i << 3))
        
        if (Concurrency::details::UMSSchedulingContext::OnPrimary(rdi_1) == 0
                && (*(rsi + 0x60) & 0x1800) != 0)
            struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject_5
            sub_14297d3f0(&exceptionObject_5, 
                "cannot reconstruct incomplete file: part with missing type")
            _CxxThrowException(&exceptionObject_5, &data_143946538)
            noreturn
        
        if (sub_1429a3540(sub_142983a40(rdi_1)) == 0)
            struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject_6
            sub_14297d3c0(&exceptionObject_6, 
                sub_140895a80(&var_1a0, 
                    "cannot reconstruct incomplete file: part with unknown type ", 
                    sub_142983a40(rdi_1)))
            _CxxThrowException(&exceptionObject_6, &data_143946538)
            noreturn
        
        i += 1
        r9 = arg3[1]
        rdx = *arg3
    while (i u< (r9 - rdx) s>> 3)

int64_t rbx = 0
int64_t var_208 = 0
int64_t* var_1e8
sub_142995aa0(&var_1e8, (r9 - rdx) s>> 3)
sub_1429ae780(&var_1a0, (arg3[1] - *arg3) s>> 3)
int64_t i_1 = 0
int64_t rcx_9 = *arg3
int32_t var_264
int32_t var_260
int64_t j_1
int32_t* var_58
int64_t var_50

if ((arg3[1] - rcx_9) s>> 3 != 0)
    int64_t* rdi_2 = var_1e8
    void* rsi_1 = var_1a0
    
    do
        int64_t* rcx_10 = *(rcx_9 + (i_1 << 3))
        rbx += (rcx_10[7] - rcx_10[6]) s>> 3
        var_208 = rbx
        
        if (sub_1429a3660(sub_142983a40(rcx_10)) == 0)
            rdi_2[i_1] = 0
            int64_t rcx_21 = sx.q(*sub_14297ea20(*(*arg3 + (i_1 << 3))))
            
            if (rcx_21.d u> 9)
                struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject_4
                sub_14297d3f0(&exceptionObject_4, 
                    "Unknown compression method in chunk offset reconstruction")
                _CxxThrowException(&exceptionObject_4, &data_143946538)
                noreturn
            
            switch (rcx_21)
                case 0, 1, 2
                    *(rsi_1 + (i_1 << 2)) = 1
                case 3, 5
                    *(rsi_1 + (i_1 << 2)) = 0x10
                case 4, 6, 7, 8
                    *(rsi_1 + (i_1 << 2)) = 0x20
                case 9
                    *(rsi_1 + (i_1 << 2)) = 0x100
        else
            int64_t* rbx_1 = *(*arg3 + (i_1 << 3))
            int32_t* rax_19 = sub_142980a30(rbx_1)
            int32_t r15_1 = *rax_19
            int32_t r14_1 = rax_19[2]
            int32_t rsi_2 = rax_19[1]
            int32_t rdi_3 = rax_19[3]
            j_1.o = *sub_1429839b0(rbx_1)
            sub_1429bd870(&j_1, r15_1, r14_1, rsi_2, rdi_3, &var_50, &var_58, &var_264, &var_260)
            int32_t* rax_21 = j_sub_140a82f30(0x28)
            int32_t* var_230_1 = rax_21
            int32_t* rbx_2
            
            if (rax_21 == 0)
                rbx_2 = nullptr
            else
                int32_t var_298_1
                var_298_1.q = var_50
                int32_t var_220
                rbx_2 = sub_1429bde70(rax_21, var_220, var_264, var_260, var_298_1, var_58)
            
            j_sub_140a74f90(var_50)
            j_sub_140a74f90(var_58)
            rdi_2 = var_1e8
            rdi_2[i_1] = rbx_2
            rbx = var_208
            rsi_1 = var_1a0
        
        i_1 += 1
        rcx_9 = *arg3
    while (i_1 u< (arg3[1] - rcx_9) s>> 3)
    
    rsi = arg1

int64_t r14_2 = rax_3
int64_t var_238 = r14_2
int64_t j_2 = 0
int64_t* r13 = arg2

while (true)
    j_1 = j_2
    
    if (j_2 u>= rbx)
        break
    
    int32_t rcx_24 = 0
    
    if (((*(rsi + 0x60) u>> 0xc).b & 1) != 0)
        char var_25c
        (*(*arg2 + 0x10))(arg2, &var_25c, 4)
        char var_25b
        char var_25a
        char var_259
        rcx_24 = ((sx.d(var_259) << 8 | zx.d(var_25a)) << 8 | zx.d(var_25b)) << 8 | zx.d(var_25c)
    
    int64_t* rdx_8
    
    if (((*(rsi + 0x60) u>> 0xc).b & 1) == 0 || rcx_24 s>= 0)
        rdx_8 = *arg3
    
    if ((((*(rsi + 0x60) u>> 0xc).b & 1) != 0 && rcx_24 s< 0)
            || rcx_24 s> ((arg3[1] - rdx_8) s>> 3).d)
        int32_t exceptionObject_3 = 0
        _CxxThrowException(&exceptionObject_3, &data_143946050)
        noreturn
    
    int64_t rdi_4 = sx.q(rcx_24)
    int64_t* r13_1 = rdx_8[rdi_4]
    bool cond:0_1 = sub_1429a3660(sub_142983a40(r13_1)) == 0
    int64_t rax_39 = *arg2
    int64_t rdx_18
    
    if (cond:0_1)
        (*(rax_39 + 0x10))(arg2, &var_264, 4)
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q((
            ((sx.d(var_264:3.b) << 8 | zx.d(var_264:2.b)) << 8 | zx.d(var_264:1.b)) << 8
            | zx.d(var_264.b)) - *(sub_142980a30(r13_1) + 4))
        void* rcx_69 = var_1a0
        int32_t temp0_1 = divs.dp.d(temp2_1:temp3_1, *(rcx_69 + (rdi_4 << 2)))
        *(rcx_69 + (rdi_4 << 2))
        void* rdx_23
        int64_t r8_4
        
        if (temp0_1 s>= 0)
            rdx_23 = (*arg3)[rdi_4]
            r8_4 = *(rdx_23 + 0x30)
        
        if (temp0_1 s< 0 || temp0_1 s>= ((*(rdx_23 + 0x38) - r8_4) s>> 3).d)
            int32_t exceptionObject_2 = 0
            _CxxThrowException(&exceptionObject_2, &data_143946050)
            noreturn
        
        *(r8_4 + (sx.q(temp0_1) << 3)) = r14_2
        int64_t* buffer1_3 = sub_142983a40(r13_1)
        int64_t* buffer2_1 = &data_143cc6dc0
        
        if (data_143cc6dd8 u>= 0x10)
            buffer2_1 = data_143cc6dc0
        
        int64_t* buffer1_1 = buffer1_3
        
        if (buffer1_3[3] u>= 0x10)
            buffer1_1 = *buffer1_3
        
        uint64_t count_1 = buffer1_3[2]
        int32_t rax_88
        
        if (count_1 == data_143cc6dd0)
            rax_88 = memcmp(buffer1_1, buffer2_1, count_1)
        
        if (count_1 != data_143cc6dd0 || rax_88 != 0)
            r13 = arg2
            (*(*r13 + 0x10))(r13, &var_260, 4)
            rdx_18 = sx.q((zx.d(var_260.b)
                | ((sx.d(var_260:3.b) << 8 | zx.d(var_260:2.b)) << 8 | zx.d(var_260:1.b)) << 8) + 8)
        else
            r13 = arg2
            (*(*r13 + 0x10))(r13, &var_58, 8)
            uint64_t rbx_48 = ((((
                ((zx.q(var_58:7.b) << 8 | zx.q(var_58:6.b)) << 8 | zx.q(var_58:5.b)) << 8
                | zx.q(var_58:4.b)) << 8 | zx.q(var_58:3.b)) << 8 | zx.q(var_58:2.b)) << 8
                | zx.q(var_58:1.b)) << 8 | zx.q(var_58.b)
            (*(*r13 + 0x10))(r13, &var_50, 8)
            rdx_18 = rbx_48 + 0x1c + (((((
                ((zx.q(var_50:7.b) << 8 | zx.q(var_50:6.b)) << 8 | zx.q(var_50:5.b)) << 8
                | zx.q(var_50:4.b)) << 8 | zx.q(var_50:3.b)) << 8 | zx.q(var_50:2.b)) << 8
                | zx.q(var_50:1.b)) << 8 | zx.q(var_50.b))
    else
        char var_258
        (*(rax_39 + 0x10))(arg2, &var_258, 4)
        char var_257
        char var_256
        char var_255
        int32_t rdi_11 =
            ((sx.d(var_255) << 8 | zx.d(var_256)) << 8 | zx.d(var_257)) << 8 | zx.d(var_258)
        char var_254
        (*(*arg2 + 0x10))(arg2, &var_254, 4)
        char var_253
        char var_252
        char var_251
        int32_t rsi_10 =
            ((sx.d(var_251) << 8 | zx.d(var_252)) << 8 | zx.d(var_253)) << 8 | zx.d(var_254)
        char var_250
        (*(*arg2 + 0x10))(arg2, &var_250, 4)
        char var_24f
        char var_24e
        char var_24d
        int32_t r14_9 =
            ((sx.d(var_24d) << 8 | zx.d(var_24e)) << 8 | zx.d(var_24f)) << 8 | zx.d(var_250)
        char var_24c
        (*(*arg2 + 0x10))(arg2, &var_24c, 4)
        char var_24b
        char var_24a
        char var_249
        int32_t rbx_10 =
            ((sx.d(var_249) << 8 | zx.d(var_24a)) << 8 | zx.d(var_24b)) << 8 | zx.d(var_24c)
        int64_t* rax_56 = &var_1e8[rdi_4]
        int32_t* rcx_38 = *rax_56
        
        if (rcx_38 == 0)
            int32_t exceptionObject = 0
            _CxxThrowException(&exceptionObject, &data_143946050)
            noreturn
        
        if (sub_1429be7e0(rcx_38, rdi_11, rsi_10, r14_9, rbx_10) == 0)
            int32_t exceptionObject_1 = 0
            _CxxThrowException(&exceptionObject_1, &data_143946050)
            noreturn
        
        r14_2 = var_238
        *sub_1429be1a0(*rax_56, rdi_11, rsi_10, r14_9, rbx_10) = r14_2
        int64_t* buffer1_2 = sub_142983a40(r13_1)
        int64_t* buffer2 = &data_143cc6de0
        
        if (data_143cc6df8 u>= 0x10)
            buffer2 = data_143cc6de0
        
        int64_t* buffer1 = buffer1_2
        
        if (buffer1_2[3] u>= 0x10)
            buffer1 = *buffer1_2
        
        uint64_t count = buffer1_2[2]
        int32_t rax_59
        
        if (count == data_143cc6df0)
            rax_59 = memcmp(buffer1, buffer2, count)
        
        if (count != data_143cc6df0 || rax_59 != 0)
            r13 = arg2
            char var_248
            (*(*r13 + 0x10))(r13, &var_248, 4)
            char var_247
            char var_246
            char var_245
            rdx_18 = sx.q((zx.d(var_248)
                | ((sx.d(var_245) << 8 | zx.d(var_246)) << 8 | zx.d(var_247)) << 8) + 0x14)
        else
            r13 = arg2
            char var_40
            (*(*r13 + 0x10))(r13, &var_40, 8)
            char var_3f
            char var_3e
            char var_3d
            char var_3c
            char var_3b
            char var_3a
            char var_39
            uint64_t rbx_25 = (((
                (((zx.q(var_39) << 8 | zx.q(var_3a)) << 8 | zx.q(var_3b)) << 8 | zx.q(var_3c)) << 8
                | zx.q(var_3d)) << 8 | zx.q(var_3e)) << 8 | zx.q(var_3f)) << 8 | zx.q(var_40)
            char var_48
            (*(*r13 + 0x10))(r13, &var_48, 8)
            char var_47
            char var_46
            char var_45
            char var_44
            char var_43
            char var_42
            char var_41
            rdx_18 = rbx_25 + 0x28 + ((((
                (((zx.q(var_41) << 8 | zx.q(var_42)) << 8 | zx.q(var_43)) << 8 | zx.q(var_44)) << 8
                | zx.q(var_45)) << 8 | zx.q(var_46)) << 8 | zx.q(var_47)) << 8 | zx.q(var_48))
    
    rsi = arg1
    int64_t rax_112 = r14_2 + 4
    
    if (((*(rsi + 0x60) u>> 0xc).b & 1) == 0)
        rax_112 = r14_2
    
    r14_2 = rdx_18 + rax_112
    var_238 = r14_2
    (*(*r13 + 0x28))(r13, r14_2)
    j_2 = j_1 + 1
    rbx = var_208

int64_t* rdi_12 = var_1e8
int64_t i_2 = 0
int64_t i_3 = 0
int64_t rdx_29 = *arg3

if ((arg3[1] - rdx_29) s>> 3 != 0)
    int64_t* rsi_11 = rdi_12
    
    do
        int64_t rcx_100 = *rdi_12
        
        if (rcx_100 != 0)
            int64_t rbx_49 = 0
            int64_t var_1c0
            sub_1429ae860(&var_1c0, sub_1405d9250(rcx_100))
            int64_t j = 0
            j_1 = 0
            int64_t var_1b8
            int64_t r10_1 = var_1b8
            int64_t r9_7 = var_1c0
            int64_t rax_119
            int64_t rdx_31
            rdx_31:rax_119 = muls.dp.q(0x2aaaaaaaaaaaaaab, r10_1 - r9_7)
            int64_t rdx_32 = rdx_31 s>> 2
            
            if (rdx_32 != neg.q(rdx_32 u>> 0x3f))
                int64_t* r11_1 = nullptr
                
                do
                    int64_t k = 0
                    void* r8_5 = *(r11_1 + r9_7)
                    int64_t rax_122
                    int64_t rdx_34
                    rdx_34:rax_122 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(r11_1 + r9_7 + 8) - r8_5)
                    int64_t rdx_35 = rdx_34 s>> 2
                    
                    if (rdx_35 != neg.q(rdx_35 u>> 0x3f))
                        int64_t r10_2 = 0
                        int64_t rdx_39
                        
                        do
                            int64_t rdx_37 = 0
                            int64_t* rax_125 = r8_5 + r10_2
                            
                            if ((rax_125[1] - *rax_125) s>> 3 != 0)
                                do
                                    *(*(*(*arg3 - rsi_11 + rdi_12) + 0x30) + (rbx_49 << 3)) =
                                        *(*rax_125 + (rdx_37 << 3))
                                    rbx_49 += 1
                                    rdx_37 += 1
                                    r9_7 = var_1c0
                                    r8_5 = *(r11_1 + r9_7)
                                    rax_125 = r8_5 + r10_2
                                while (rdx_37 u< (rax_125[1] - *rax_125) s>> 3)
                            
                            k += 1
                            r10_2 += 0x18
                            int64_t rax_128
                            int64_t rdx_38
                            rdx_38:rax_128 =
                                muls.dp.q(0x2aaaaaaaaaaaaaab, *(r11_1 + r9_7 + 8) - *(r11_1 + r9_7))
                            rdx_39 = rdx_38 s>> 2
                        while (k u< rdx_39 + (rdx_39 u>> 0x3f))
                        r10_1 = var_1b8
                        j = j_1
                    
                    j += 1
                    j_1 = j
                    r11_1 = &r11_1[3]
                while (j u< (r10_1 - r9_7) s/ 0x18)
                
                i_2 = i_3
            
            void* rbx_50 = *rdi_12
            
            if (rbx_50 != 0)
                sub_1429ac6c0(rbx_50 + 0x10)
                j_sub_140a74f90(rbx_50)
            
            sub_1429ac6c0(&var_1c0)
            rdx_29 = *arg3
        
        i_2 += 1
        i_3 = i_2
        rdi_12 = &rdi_12[1]
    while (i_2 u< (arg3[1] - rdx_29) s>> 3)
    
    r13 = arg2

(*(*r13 + 0x30))(r13)
int64_t result = (*(*r13 + 0x28))(r13, rax_3)
void* rcx_125 = var_1a0

if (rcx_125 != 0)
    void* rax_143 = rcx_125
    int64_t var_190
    
    if ((var_190 - rcx_125) s>> 2 << 2 u>= 0x1000)
        rcx_125 = *(rcx_125 - 8)
        
        if (rax_143 - rcx_125 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    result = j_sub_140a74f90(rcx_125)

int64_t* rcx_126 = var_1e8

if (rcx_126 != 0)
    int64_t* rax_146 = rcx_126
    int64_t var_1d8
    
    if (((var_1d8 - rcx_126) & 0xfffffffffffffff8) u>= 0x1000)
        rcx_126 = rcx_126[-1]
        
        if (rax_146 - rcx_126 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    result = j_sub_140a74f90(rcx_126)

__security_check_cookie(rax_1 ^ &var_2b8)
return result
