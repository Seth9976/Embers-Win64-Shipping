// 函数: sub_142c9c0b0
// 地址: 0x142c9c0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_d8 = -2
void var_128
int64_t var_48 = __security_cookie ^ &var_128

if (getenv("IEXDEBUGTHROW") != 0)
    DebugBreak()

char* rax_3 = strerror(zx.q(arg2))
int64_t* var_d0
sub_140592d30(&var_d0, arg1)
label_142c9c120:
int64_t* rbx_1 = &var_d0
int64_t* r13_1 = var_d0
int64_t var_b8

if (var_b8 u>= 0x10)
    rbx_1 = r13_1

void* var_c0
void* r15_1 = var_c0

if (r15_1 u>= 2)
    void* r14_1 = r15_1 + rbx_1
    uint64_t i_2 = memchr(rbx_1, 0x25, r14_1 - 1 - rbx_1)
    uint64_t i_1 = i_2
    
    if (i_2 != 0)
        uint64_t i
        
        do
            if (*i_1 == 0x5425)
                void* r9_2 = i_1 - rbx_1
                
                if (r9_2 == -1)
                    goto label_142c9c190
                
                void* rdi_1 = -ffffffffffffffff
                
                do
                    rdi_1 += 1
                while (*(rax_3 + rdi_1) != 0)
                
                if (r15_1 u< r9_2)
                    sub_14058b100()
                    noreturn
                
                int64_t rax_9 = r15_1 - r9_2
                int64_t r14_2 = 2
                
                if (rax_9 u< 2)
                    r14_2 = rax_9
                
                if (r14_2 == rdi_1)
                    int64_t* rcx_6 = &var_d0
                    
                    if (var_b8 u>= 0x10)
                        rcx_6 = r13_1
                    
                    memmove(rcx_6 + r9_2, rax_3, rdi_1.d)
                    goto label_142c9c120
                
                void* rax_11 = r15_1 - r14_2
                int32_t r13_3 = rax_11.d - r9_2.d
                
                if (rdi_1 u< r14_2)
                    var_c0 = rax_11 + rdi_1
                    int64_t** rbx_2 = &var_d0
                    
                    if (var_b8 u>= 0x10)
                        rbx_2 = var_d0
                    
                    void* rbx_3 = rbx_2 + r9_2
                    memmove(rbx_3, rax_3, rdi_1.d)
                    memmove(rbx_3 + rdi_1, rbx_3 + r14_2, r13_3 + 1)
                    goto label_142c9c120
                
                void* r12_3 = rdi_1 - r14_2
                int64_t* rcx_10 = &var_d0
                
                if (r12_3 u> var_b8 - r15_1)
                    sub_142c9a280(rcx_10, r12_3, 0, r9_2, r14_2, rax_3, rdi_1)
                    goto label_142c9c120
                
                var_c0 = r15_1 + r12_3
                
                if (var_b8 u>= 0x10)
                    rcx_10 = var_d0
                
                void* r8_8 = rcx_10 + r9_2
                void* rdx_5 = r8_8 + r14_2
                void* rbx_4
                
                if (rdi_1 + rax_3 u<= r8_8 || rax_3 u> rcx_10 + r15_1)
                    rbx_4 = rdi_1
                else if (rdx_5 u> rax_3)
                    rbx_4 = rdx_5 - rax_3
                else
                    rbx_4 = nullptr
                
                memmove(rdx_5 + r12_3, rdx_5, r13_3 + 1)
                memmove(r8_8, rax_3, rbx_4.d)
                memcpy(rbx_4 + r8_8, rbx_4 + r12_3 + rax_3, rdi_1.d - rbx_4.d)
                goto label_142c9c120
            
            i = memchr(i_1 + 1, 0x25, r14_1 - 1 - (i_1 + 1))
            i_1 = i
        while (i != 0)

label_142c9c190:
struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject

if (arg2 - 1 u<= 0x8a)
    switch (arg2)
        case 1
            sub_142c9bbb0(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143946908)
            noreturn
        case 2
            sub_142c9b430(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143946978)
            noreturn
        case 3
            sub_142c9bee0(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_1439469e8)
            noreturn
        case 4
            sub_142c9add0(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143946a58)
            noreturn
        case 5
            sub_142c9ae90(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143946ac8)
            noreturn
        case 6
            sub_142c9ba90(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143946b38)
            noreturn
        case 7
            sub_142c9a470(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143946ba8)
            noreturn
        case 8
            sub_142c9b490(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143946c18)
            noreturn
        case 9
            sub_142c9a710(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143946c88)
            noreturn
        case 0xa
            sub_142c9a890(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143946cf8)
            noreturn
        case 0xb
            sub_142c9a650(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143946d68)
            noreturn
        case 0xc
            sub_142c9b5b0(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143946dd8)
            noreturn
        case 0xd
            sub_142c9a4d0(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143946e48)
            noreturn
        case 0xe
            sub_142c9ab90(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143946eb8)
            noreturn
        case 0x10
            sub_142c9a7d0(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143946f28)
            noreturn
        case 0x11
            sub_142c9ab30(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143946f98)
            noreturn
        case 0x12
            sub_142c9c060(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143947008)
            noreturn
        case 0x13
            sub_142c9b3d0(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143947078)
            noreturn
        case 0x14
            sub_142c9b8b0(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_1439470e8)
            noreturn
        case 0x15
            sub_142c9af50(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143947158)
            noreturn
        case 0x16
            sub_142c9ae30(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_1439471c8)
            noreturn
        case 0x17
            sub_142c9b2b0(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143947238)
            noreturn
        case 0x18
            sub_142c9b010(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_1439472a8)
            noreturn
        case 0x19
            sub_142c9ba30(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143947318)
            noreturn
        case 0x1b
            sub_142c9abf0(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_1439473f8)
            noreturn
        case 0x1c
            sub_142c9b6d0(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143947468)
            noreturn
        case 0x1d
            sub_142c9be80(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_1439474d8)
            noreturn
        case 0x1e
            sub_142c9bdf0(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143947548)
            noreturn
        case 0x1f
            sub_142c9b070(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_1439475b8)
            noreturn
        case 0x20
            sub_142c9bc10(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143947628)
            noreturn
        case 0x21
            sub_142c9aad0(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143947698)
            noreturn
        case 0x22
            sub_142c9bd90(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143947708)
            noreturn
        case 0x24
            sub_142c9aa10(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143947858)
            noreturn
        case 0x26
            sub_142c9b130(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143947c48)
            noreturn
        case 0x27
            sub_142c9b4f0(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_1439478c8)
            noreturn
        case 0x28
            sub_142c9b7f0(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143947d98)
            noreturn
        case 0x29
            sub_142c9b910(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143947e78)
            noreturn
        case 0x2a
            sub_142c9ad10(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143947d28)
            noreturn
        case 0x64
            sub_142c9a530(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143948268)
            noreturn
        case 0x65
            sub_142c9a590(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_1439482d8)
            noreturn
        case 0x66
            sub_142c9a5f0(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_1439481f8)
            noreturn
        case 0x67
            sub_142c9a6b0(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143948818)
            noreturn
        case 0x68
            sub_142c9a770(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143947bd8)
            noreturn
        case 0x69
            sub_142c9a830(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_1439488f8)
            noreturn
        case 0x6a
            sub_142c9a8f0(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143948498)
            noreturn
        case 0x6b
            sub_142c9a950(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143948738)
            noreturn
        case 0x6c
            sub_142c9a9b0(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143948508)
            noreturn
        case 0x6d
            sub_142c9aa70(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143947f58)
            noreturn
        case 0x6e
            sub_142c9ac50(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_1439487a8)
            noreturn
        case 0x6f
            sub_142c9acb0(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_1439477e8)
            noreturn
        case 0x70
            sub_142c9ad70(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143948888)
            noreturn
        case 0x71
            sub_142c9aef0(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_1439485e8)
            noreturn
        case 0x72
            sub_142c9afb0(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143947e08)
            noreturn
        case 0x73
            sub_142c9b0d0(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143947fc8)
            noreturn
        case 0x74
            sub_142c9b190(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143948348)
            noreturn
        case 0x75
            sub_142c9b1f0(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143948428)
            noreturn
        case 0x76
            sub_142c9b250(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_1439483b8)
            noreturn
        case 0x77
            sub_142c9b310(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143948578)
            noreturn
        case 0x78
            sub_142c9b370(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_1439479a8)
            noreturn
        case 0x79
            sub_142c9b550(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143947af8)
            noreturn
        case 0x7a
            sub_142c9b610(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143947778)
            noreturn
        case 0x7b
            sub_142c9b670(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_1439480a8)
            noreturn
        case 0x7c
            sub_142c9b730(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143947a88)
            noreturn
        case 0x7d
            sub_142c9b790(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143947938)
            noreturn
        case 0x7e
            sub_142c9b850(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143948658)
            noreturn
        case 0x80
            sub_142c9b970(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143947ee8)
            noreturn
        case 0x81
            sub_142c9b9d0(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143948968)
            noreturn
        case 0x82
            sub_142c9baf0(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143948188)
            noreturn
        case 0x84
            sub_142c9bb50(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143947cb8)
            noreturn
        case 0x86
            sub_142c9bc70(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143947b68)
            noreturn
        case 0x87
            sub_142c9bcd0(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143948118)
            noreturn
        case 0x88
            sub_142c9bd30(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143948038)
            noreturn
        case 0x89
            sub_142c9bf40(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143947a18)
            noreturn
        case 0x8a
            sub_142c9bfa0(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_1439486c8)
            noreturn
        case 0x8b
            sub_142c9c000(&exceptionObject, &var_d0)
            _CxxThrowException(&exceptionObject, &data_143947388)
            noreturn

sub_142c9be20(&exceptionObject, &var_d0)
_CxxThrowException(&exceptionObject, &data_143946790)
noreturn
