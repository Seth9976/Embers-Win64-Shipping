// 函数: sub_141dcd180
// 地址: 0x141dcd180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int32_t rax_2 = 0x7fffffff

if (arg2 != 0)
    rax_2 = arg2

void* rax_4 = (*(*arg1 + 0x150))()
int64_t r14 = 0
void* rbx = rax_4
char rax_5

if ((*(arg1 + 0x59) & 0x20) == 0)
    rax_5 = sub_14243ade0(rax_4)

char var_198
void*** (* var_188)()

if (((*(arg1 + 0x59) & 0x20) != 0 || rax_5 == 0) && sub_140d23dc0(arg1, 0x30) == 0
        && (*(arg1 + 0x5b) & 0x80) == 0)
    var_198 = 0
    char* var_180_1 = &var_198
    var_188 = sub_141dbb950
    void* rax_7
    int64_t rdx
    rax_7, rdx = sub_140a756e0(&var_188, &data_143a2d218)
    int64_t r8 = *arg1
    rdx.b = 1
    (*(r8 + 0x528))(arg1, rdx, r8)
    *(arg1 + 0x5b) |= 0x80
    *(rax_7 + 0x10) = 0
    rbx = rax_4

int64_t* rcx_4 = arg1[0x26]

if (rcx_4 != 0 && (rcx_4[0x11].b & 1) == 0 && (*(rcx_4 + 0x89) & 2) != 0)
    sub_141ef14c0(rcx_4, rbx, arg3)

int32_t r15 = 0
int64_t** var_58 = nullptr
int32_t r13 = 0
int32_t var_4c = 0x18
int32_t var_50 = 0
int64_t* rax_8 = sub_142459c10()
int64_t* rdi_1

if (rax_8 == 0)
    rdi_1 = nullptr
else
    void* rax_9 = sub_142459c10()
    
    if (rax_9 == 0)
        rdi_1 = nullptr
    else
        int64_t rax_10 = sx.q(*(rax_9 + 0x38))
        
        if (rax_10.d s> rax_8[7].d)
            rdi_1 = nullptr
        else
            rdi_1 = rax_8
            
            if (*(rax_8[6] + (rax_10 << 3)) != rax_9 + 0x30)
                rdi_1 = nullptr

void var_118
void* r8_2 = &var_118

if (rdi_1 != sub_142459c10())
    sub_1419f71f0(arg1, rax_8, r8_2)
else
    sub_1419f6fe0(arg1, rax_8, r8_2)

int32_t r9 = var_50
int32_t rsi = 0
int64_t var_168
__builtin_memset(&var_168, 0, 0x2c)
int32_t var_13c = 0x80
int32_t var_138 = 0xffffffff
int32_t var_134 = 0
int64_t var_128 = 0
int32_t var_120 = 0
int64_t* rbx_2

if (r9 s> 0)
    int64_t** r10_1 = var_58
    
    while (r13 s< rax_2)
        int64_t** rax_13 = &var_118
        
        if (r10_1 != 0)
            rax_13 = r10_1
        
        rbx_2 = *(rax_13 + r14)
        
        if ((rbx_2[0x11].b & 1) == 0 && (*(rbx_2 + 0x89) & 2) != 0)
            int32_t rax_14 = *(rbx_2 + 0xc)
            void* const rax_20
            
            if (rax_14 s>= data_143e1d9b4)
                rax_20 = nullptr
            else
                int16_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rax_14)
                uint32_t rdx_5 = zx.d(temp0_1)
                int32_t rax_16 = temp1_1 + rdx_5
                rax_20 = *(data_143e1d9a0 + (sx.q(rax_16 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_16.w) - rdx_5) * 0x18
            
            if (((*(rax_20 + 8) u>> 0x1d).b & 1) == 0)
                int64_t* rdi_2 = nullptr
                void* rax_23 = sub_1425881f0()
                void* rdx_7 = rbx_2[2]
                int64_t rax_24 = sx.q(*(rax_23 + 0x38))
                
                if (rax_24.d s<= *(rdx_7 + 0x38)
                        && *(*(rdx_7 + 0x30) + (rax_24 << 3)) == rax_23 + 0x30)
                    int64_t* r8_5 = rbx_2
                    
                    while (true)
                        r8_5 = r8_5[0x18]
                        
                        if (r8_5 == 0)
                            break
                        
                        if (r8_5[0x14] != rbx_2[0x14])
                            break
                        
                        if ((r8_5[0x11].b & 1) != 0)
                            break
                        
                        if ((*(r8_5 + 0x89) & 2) != 0)
                            int32_t rax_27 = *(r8_5 + 0xc)
                            void* const rdx_9
                            
                            if (rax_27 s>= data_143e1d9b4)
                                rdx_9 = nullptr
                            else
                                uint32_t rcx_12 = zx.d(rax_27.w)
                                
                                if (rax_27 s< 0)
                                    rax_27 += 0xffff
                                    rcx_12 -= 0x10000
                                
                                rdx_9 = *(data_143e1d9a0 + (sx.q(rax_27 s>> 0x10) << 3))
                                    + sx.q(rcx_12) * 0x18
                            
                            if (((*(rdx_9 + 8) u>> 0x1d).b & 1) == 0)
                                rdi_2 = r8_5
                    
                    if (rdi_2 != 0)
                        var_198 = 0
                        var_188 = rdi_2
                        void var_178
                        sub_140946410(&var_168, &var_178, &var_188, &var_198)
                        
                        if (var_198 != 0)
                            r9 = var_50
                            break
                        
                        rsi -= 1
                        r14 -= 8
                        r15 -= 1
                        rbx_2 = rdi_2
                
                sub_141ef14c0(rbx_2, rax_4, arg3)
                r9 = var_50
                r13 += 1
                r10_1 = var_58
        
        r15 += 1
        rsi += 1
        r14 += 8
        
        if (rsi s>= r9)
            break

if (r9 != r15)
    rbx_2.b = 0
else
    (*(*arg1 + 0x4c0))(arg1)
    rbx_2.b = 1

int32_t var_120_1 = 0

if (var_128 != 0)
    sub_140a74f90(var_128)

int64_t var_160
bool cond:3 = var_160:4.d == 0
var_160.d = 0

if (not(cond:3))
    sub_1405a5410(&var_168, 0)

int32_t var_138_1 = 0xffffffff
int32_t var_134_1 = 0
int64_t var_158
sub_14059a8e0(&var_158, 0)
int64_t var_148

if (var_148 != 0)
    sub_140a74f90(var_148)

int64_t rcx_21 = var_168

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

if (var_58 != 0)
    sub_140a74f90(var_58)

__security_check_cookie(rax_1 ^ &var_1b8)
return zx.q(rbx_2.b)
