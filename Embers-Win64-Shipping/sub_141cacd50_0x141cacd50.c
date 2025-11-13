// 函数: sub_141cacd50
// 地址: 0x141cacd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int32_t var_6c = 0x80
int32_t var_200 = 0
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
uint64_t var_210 = 0
int64_t var_208 = 0
int64_t* var_1b8 = nullptr
int32_t i_11 = 0
int64_t* var_1c8 = nullptr
int32_t i_10 = 0
int64_t var_e8
__builtin_memset(&var_e8, 0, 0x2c)
int32_t var_bc = 0x80
int32_t var_b8 = 0xffffffff
int32_t var_b4 = 0
int64_t var_a8 = 0
int32_t var_a0 = 0
int16_t* var_1f8
__builtin_memset(&var_1f8, 0, 0x20)
sub_1405947f0(&var_1f8, 0x12)
int64_t var_1f0
int32_t r14 = var_1f0:4.d
uint32_t rsi = var_1f0.d + 0x12
var_1f0.d = rsi

if (rsi s> r14)
    sub_140594770(&var_1f8)
    r14 = var_1f0:4.d
    rsi = var_1f0.d

int16_t* rbx = var_1f8
UnDecorator::getReferenceType(rbx, u"/Game/Collections", 0x24)
int32_t var_180
sub_140598750(&var_e8, &var_180)
int16_t* const rdx_2 = rbx
int64_t* var_178
*var_178 = rbx
var_178[1].d = rsi
*(var_178 + 0xc) = r14
var_178[2].d = 0xffffffff

if (rsi == 0)
    rdx_2 = &data_142d40450

int32_t rcx_5 = rsi - 1

if (rsi == 0)
    rcx_5 = 0

void var_1a8
sub_14059a6d0(&var_e8, &var_1a8, sub_1405969c0(rcx_5, rdx_2), var_178, var_180, nullptr)
int64_t* var_188 = arg1
int64_t* var_1a0 = &var_1b8
rsi.b = 1
int64_t* var_170 = arg1
int64_t* var_198 = &var_1c8
int64_t* var_190 = &var_98
uint64_t var_1e8
uint64_t* var_168 = &var_1e8
uint64_t* var_140 = &var_210
int64_t* var_138 = &var_e8
int64_t* var_130 = &var_98
int64_t* var_128 = &var_170
int64_t* var_120 = &var_1b8
int64_t* var_118 = &var_1c8
int32_t* var_110 = &var_200
int64_t** var_108 = &var_1a0
int64_t* var_148 = arg1
char var_218 = 1
bool z

if (0 == arg1[0x11].d)
    arg1[0x11].d = 0
    z = true
else
    arg1[0x11].d
    z = false

if (z)
    int128_t zmm6 = 0x3dcccccd
    bool z_1
    
    do
        uint64_t var_1d8 = 0
        uint64_t r13_1 = 0
        int32_t var_1d0_1 = 0
        int32_t rdi_1 = 0
        EnterCriticalSection(&arg1[1])
        
        if (arg1[0xa].d s> 0)
            *(arg1 + 0x41) = 1
            
            if (&var_1e8 != &arg1[6])
                int32_t rsi_1 = arg1[7].d
                int64_t r14_1 = arg1[6]
                int64_t var_1e0_1
                int32_t r8_1 = var_1e0_1:4.d
                var_1e0_1.d = rsi_1
                
                if (rsi_1 != 0 || r8_1 != 0)
                    sub_1405a4c70(&var_1e8, rsi_1, r8_1)
                    memcpy(var_1e8, r14_1, rsi_1 * 2)
                else
                    var_1e0_1:4.d = 0
            
            int64_t* rax_6 = arg1[9]
            
            if (&var_1d8 != rax_6)
                rdi_1 = rax_6[1].d
                int64_t rsi_2 = *rax_6
                
                if (rdi_1 != 0)
                    sub_1405a4c70(&var_1d8, rdi_1, 0)
                    r13_1 = var_1d8
                    memcpy(r13_1, rsi_2, rdi_1 * 2)
            
            int64_t rcx_13 = *arg1[9]
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
            
            int32_t rax_8 = arg1[0xa].d
            
            if (rax_8 != 1)
                int64_t rcx_14 = arg1[9]
                memmove(rcx_14, rcx_14 + 0x10, (rax_8 - 1) << 4)
                rax_8 = arg1[0xa].d
            
            rsi = zx.d(var_218)
            arg1[0xa].d = rax_8 - 1
        
        if (arg1 != -8)
            LeaveCriticalSection(&arg1[1])
        
        int32_t rax_10 = rdi_1 - 1
        
        if (rdi_1 == 0)
            rax_10 = 0
        
        if (rax_10 s<= 0)
            if (rsi.b == 0)
                var_218 = 1
                EnterCriticalSection(&arg1[1])
                *(arg1 + 0x41) = rsi.b
                
                if (arg1 != -8)
                    LeaveCriticalSection(&arg1[1])
            
            sub_141c97280(&var_1a0)
            
            if (arg1[8].b == 0)
                zmm6 = sub_140b73230(zmm6)
            else
                (*(*arg1 + 0x10))(arg1)
        else
            if (rsi.b != 0)
                var_218 = 0
                int64_t performanceCount_1
                QueryPerformanceCounter(&performanceCount_1)
                var_200 = 0
            
            void** const var_160 = &data_143210bd0
            int64_t (* var_158_1)(int64_t* arg1, int64_t* arg2, void* arg3) = sub_141c99e10
            int64_t** var_150_1 = &var_148
            sub_140a464c0()
            uint64_t rdx_10 = &data_142d40450
            
            if (rdi_1 != 0)
                rdx_10 = r13_1
            
            char const (* r9_1)[0x4] = data_14399ea08
            (*(r9_1 + 0xb0))(&data_14399ea08, rdx_10, &var_160, r9_1)
            EnterCriticalSection(&arg1[1])
            int32_t i_6 = var_208.d
            int64_t* rsi_4
            
            if (i_6 s> 0)
                int64_t r14_2 = sx.q(arg1[0xa].d)
                
                if (r14_2.d != 0)
                    int32_t rdx_11 = i_6 + r14_2.d
                    
                    if (rdx_11 s> var_208:4.d)
                        sub_14061cd70(&var_210, rdx_11)
                        i_6 = var_208.d
                    
                    memmove((sx.q(i_6) << 4) + var_210, arg1[9], (r14_2 << 4).d)
                    i_6 = var_208.d + r14_2.d
                    arg1[0xa].d = 0
                    var_208.d = i_6
                    r14_2 = 0
                
                if (&arg1[9] == &var_210)
                    goto label_141cad22e
                
                int64_t* rsi_3 = arg1[9]
                
                if (r14_2.d != 0)
                    int32_t i
                    
                    do
                        int64_t rcx_22 = *rsi_3
                        
                        if (rcx_22 != 0)
                            sub_140a74f90(rcx_22)
                        
                        rsi_3 = &rsi_3[2]
                        i = r14_2.d
                        r14_2 = zx.q(r14_2.d - 1)
                    while (i != 1)
                    rsi_3 = arg1[9]
                    i_6 = var_208.d
                
                if (rsi_3 != 0)
                    sub_140a74f90(rsi_3)
                    i_6 = var_208.d
                
                rsi_4 = nullptr
                arg1[9] = var_210
                arg1[0xa].d = i_6
                *(arg1 + 0x54) = var_208:4.d
                i_6 = 0
                var_208 = 0
                var_210 = 0
                goto label_141cad23d
            
        label_141cad22e:
            int32_t rax_13 = var_208:4.d
            rsi_4 = var_210
            
            if (rax_13 s< 0)
                if (i_6 != 0)
                    int32_t i_1
                    
                    do
                        int64_t rcx_25 = *rsi_4
                        
                        if (rcx_25 != 0)
                            sub_140a74f90(rcx_25)
                        
                        rsi_4 = &rsi_4[2]
                        i_1 = i_6
                        i_6 -= 1
                    while (i_1 != 1)
                    rax_13 = var_208:4.d
                
                var_208.d = 0
                
                if (rax_13 != 0)
                    sub_14061cd70(&var_210, 0)
            else
            label_141cad23d:
                
                if (i_6 != 0)
                    int32_t i_2
                    
                    do
                        int64_t rcx_24 = *rsi_4
                        
                        if (rcx_24 != 0)
                            sub_140a74f90(rcx_24)
                        
                        rsi_4 = &rsi_4[2]
                        i_2 = i_6
                        i_6 -= 1
                    while (i_2 != 1)
                
                var_208.d = 0
            
            if (arg1[8].b == 0)
                sub_141c97280(&var_1a0)
                sub_141cb58a0(arg1, 1)
            
            if (arg1 != -8)
                LeaveCriticalSection(&arg1[1])
        
        if (r13_1 != 0)
            sub_140a74f90(r13_1)
        
        if (0 == arg1[0x11].d)
            arg1[0x11].d = 0
            z_1 = true
        else
            arg1[0x11].d
            z_1 = false
        
        rsi = zx.d(var_218)
    while (z_1)

int32_t var_a0_1 = 0

if (var_a8 != 0)
    sub_140a74f90(var_a8)

sub_140669e00(&var_e8)
int32_t i_7 = i_10
int64_t* rbx_2 = var_1c8

if (i_7 != 0)
    int32_t i_3
    
    do
        int64_t rcx_37 = *rbx_2
        
        if (rcx_37 != 0)
            sub_140a74f90(rcx_37)
        
        rbx_2 = &rbx_2[3]
        i_3 = i_7
        i_7 -= 1
    while (i_3 != 1)
    rbx_2 = var_1c8

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)

int32_t i_8 = i_11
int64_t* rbx_3 = var_1b8

if (i_8 != 0)
    int32_t i_4
    
    do
        int64_t rcx_39 = *rbx_3
        
        if (rcx_39 != 0)
            sub_140a74f90(rcx_39)
        
        rbx_3 = &rbx_3[3]
        i_4 = i_8
        i_8 -= 1
    while (i_4 != 1)
    rbx_3 = var_1b8

if (rbx_3 != 0)
    sub_140a74f90(rbx_3)

int32_t i_9 = var_208.d
uint64_t rbx_4 = var_210

if (i_9 != 0)
    int32_t i_5
    
    do
        int64_t rcx_41 = *rbx_4
        
        if (rcx_41 != 0)
            sub_140a74f90(rcx_41)
        
        rbx_4 += 0x10
        i_5 = i_9
        i_9 -= 1
    while (i_5 != 1)
    rbx_4 = var_210

if (rbx_4 != 0)
    sub_140a74f90(rbx_4)

int32_t var_50_1 = 0

if (var_58 != 0)
    sub_140a74f90(var_58)

sub_140669e00(&var_98)
uint64_t rcx_45 = var_1e8

if (rcx_45 != 0)
    sub_140a74f90(rcx_45)

__security_check_cookie(rax_1 ^ &var_248)
return 0
