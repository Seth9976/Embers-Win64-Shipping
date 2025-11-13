// 函数: sub_140835d70
// 地址: 0x140835d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143ce3e70 s> *rbx_1)
    _Init_thread_header(&data_143ce3e70)
    
    if (data_143ce3e70 == 0xffffffff)
        data_143ce3e68 = j_sub_140d2ee50(sub_140cddea0(), nullptr, u"/Script/CoreUObject", 0)
        _Init_thread_footer(&data_143ce3e70)

if (data_143ce3e80 s> *rbx_1)
    _Init_thread_header(&data_143ce3e80)
    
    if (data_143ce3e80 == 0xffffffff)
        data_143ce3e78 = j_sub_140d2ee50(sub_140cddea0(), nullptr, u"/Script/Niagara", 0)
        _Init_thread_footer(&data_143ce3e80)

sub_140821df0()
sub_140812540(&data_143ce3aa0, &data_14396f300)
sub_140812540(&data_143ce3ac0, &data_14396f300)
int64_t* r13 = nullptr
int64_t* arg_18 = nullptr
void* const rbx_2

if (data_14396f300:8.w != 3)
    rbx_2 = data_14396f300.q
    
    if (rbx_2 == 0)
        rbx_2 = nullptr
    else
        void* rax_3 = sub_140be01c0()
        void* rdx_1 = *(rbx_2 + 0x10)
        int64_t rax_4 = sx.q(*(rax_3 + 0x38))
        
        if (rax_4.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30
                || rbx_2 == 0)
            rbx_2 = nullptr
        else
        label_140835e34:
            void* rax_6 = sub_140bdfe30()
            void* rdx_2 = *(rbx_2 + 0x10)
            int64_t rax_7 = sx.q(*(rax_6 + 0x38))
            
            if (rax_7.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30)
                rbx_2 = nullptr
else
    rbx_2 = data_143ce3880
    
    if (rbx_2 != 0)
        goto label_140835e34
    
    rbx_2 = nullptr

int32_t i_2

if (*sub_1408296b0(&data_14396f170, &i_2, rbx_2) != 0xffffffff)
    sub_140812540(&data_143ce3ae0, &data_14396f300)

sub_140812540(&data_143ce3aa0, &data_14396f128)
sub_140812540(&data_143ce3ab0, &data_14396f128)
void* const rbx_3

if (data_14396f130 != 3)
    rbx_3 = data_14396f128
    
    if (rbx_3 == 0)
        rbx_3 = nullptr
    else
        void* rax_10 = sub_140be01c0()
        void* rdx_4 = *(rbx_3 + 0x10)
        int64_t rax_11 = sx.q(*(rax_10 + 0x38))
        
        if (rax_11.d s> *(rdx_4 + 0x38) || *(*(rdx_4 + 0x30) + (rax_11 << 3)) != rax_10 + 0x30
                || rbx_3 == 0)
            rbx_3 = nullptr
        else
        label_140835ef2:
            void* rax_13 = sub_140bdfe30()
            void* rdx_5 = *(rbx_3 + 0x10)
            int64_t rax_14 = sx.q(*(rax_13 + 0x38))
            
            if (rax_14.d s> *(rdx_5 + 0x38) || *(*(rdx_5 + 0x30) + (rax_14 << 3)) != rax_13 + 0x30)
                rbx_3 = nullptr
else
    rbx_3 = data_143ce3880
    
    if (rbx_3 != 0)
        goto label_140835ef2
    
    rbx_3 = nullptr

if (*sub_1408296b0(&data_14396f170, &i_2, rbx_3) != 0xffffffff)
    sub_140812540(&data_143ce3ae0, &data_14396f128)

sub_140812540(&data_143ce3aa0, &data_14396f138)
sub_140812540(&data_143ce3ab0, &data_14396f138)
sub_140812540(&data_143ce3ac0, &data_14396f138)
void* const rbx_4

if (data_14396f140 != 3)
    rbx_4 = data_14396f138
    
    if (rbx_4 == 0)
        rbx_4 = nullptr
    else
        void* rax_17 = sub_140be01c0()
        void* rdx_7 = *(rbx_4 + 0x10)
        int64_t rax_18 = sx.q(*(rax_17 + 0x38))
        
        if (rax_18.d s> *(rdx_7 + 0x38) || *(*(rdx_7 + 0x30) + (rax_18 << 3)) != rax_17 + 0x30
                || rbx_4 == 0)
            rbx_4 = nullptr
        else
        label_140835fc3:
            void* rax_20 = sub_140bdfe30()
            void* rdx_8 = *(rbx_4 + 0x10)
            int64_t rax_21 = sx.q(*(rax_20 + 0x38))
            
            if (rax_21.d s> *(rdx_8 + 0x38) || *(*(rdx_8 + 0x30) + (rax_21 << 3)) != rax_20 + 0x30)
                rbx_4 = nullptr
else
    rbx_4 = data_143ce3880
    
    if (rbx_4 != 0)
        goto label_140835fc3
    
    rbx_4 = nullptr

if (*sub_1408296b0(&data_14396f170, &i_2, rbx_4) != 0xffffffff)
    sub_140812540(&data_143ce3ae0, &data_14396f138)

sub_140812540(&data_143ce3aa0, &data_14396f118)
sub_140812540(&data_143ce3ab0, &data_14396f118)
void* const rbx_5

if (data_14396f118:8.w != 3)
    rbx_5 = data_14396f118.q
    
    if (rbx_5 == 0)
        rbx_5 = nullptr
    else
        void* rax_24 = sub_140be01c0()
        void* rdx_10 = *(rbx_5 + 0x10)
        int64_t rax_25 = sx.q(*(rax_24 + 0x38))
        
        if (rax_25.d s> *(rdx_10 + 0x38) || *(*(rdx_10 + 0x30) + (rax_25 << 3)) != rax_24 + 0x30
                || rbx_5 == 0)
            rbx_5 = nullptr
        else
        label_140836081:
            void* rax_27 = sub_140bdfe30()
            void* rdx_11 = *(rbx_5 + 0x10)
            int64_t rax_28 = sx.q(*(rax_27 + 0x38))
            
            if (rax_28.d s> *(rdx_11 + 0x38)
                    || *(*(rdx_11 + 0x30) + (rax_28 << 3)) != rax_27 + 0x30)
                rbx_5 = nullptr
else
    rbx_5 = data_143ce3880
    
    if (rbx_5 != 0)
        goto label_140836081
    
    rbx_5 = nullptr

if (*sub_1408296b0(&data_14396f170, &i_2, rbx_5) != 0xffffffff)
    sub_140812540(&data_143ce3ae0, &data_14396f118)

sub_140812540(&data_143ce3aa0, &data_14396f088)
sub_140812540(&data_143ce3ab0, &data_14396f088)
sub_140812540(&data_143ce3ac0, &data_14396f088)
void* const rbx_6

if (data_14396f090 != 3)
    rbx_6 = data_14396f088
    
    if (rbx_6 == 0)
        rbx_6 = nullptr
    else
        void* rax_31 = sub_140be01c0()
        void* rdx_13 = *(rbx_6 + 0x10)
        int64_t rax_32 = sx.q(*(rax_31 + 0x38))
        
        if (rax_32.d s> *(rdx_13 + 0x38) || *(*(rdx_13 + 0x30) + (rax_32 << 3)) != rax_31 + 0x30
                || rbx_6 == 0)
            rbx_6 = nullptr
        else
        label_140836152:
            void* rax_34 = sub_140bdfe30()
            void* rdx_14 = *(rbx_6 + 0x10)
            int64_t rax_35 = sx.q(*(rax_34 + 0x38))
            
            if (rax_35.d s> *(rdx_14 + 0x38)
                    || *(*(rdx_14 + 0x30) + (rax_35 << 3)) != rax_34 + 0x30)
                rbx_6 = nullptr
else
    rbx_6 = data_143ce3880
    
    if (rbx_6 != 0)
        goto label_140836152
    
    rbx_6 = nullptr

if (*sub_1408296b0(&data_14396f170, &i_2, rbx_6) != 0xffffffff)
    sub_140812540(&data_143ce3ae0, &data_14396f088)

sub_140812540(&data_143ce3aa0, &data_14396f0a8)
sub_140812540(&data_143ce3ab0, &data_14396f0a8)
sub_140812540(&data_143ce3ac0, &data_14396f0a8)
void* const rbx_7

if (data_14396f0b0 != 3)
    rbx_7 = data_14396f0a8
    
    if (rbx_7 == 0)
        rbx_7 = nullptr
    else
        void* rax_38 = sub_140be01c0()
        void* rdx_16 = *(rbx_7 + 0x10)
        int64_t rax_39 = sx.q(*(rax_38 + 0x38))
        
        if (rax_39.d s> *(rdx_16 + 0x38) || *(*(rdx_16 + 0x30) + (rax_39 << 3)) != rax_38 + 0x30
                || rbx_7 == 0)
            rbx_7 = nullptr
        else
        label_140836223:
            void* rax_41 = sub_140bdfe30()
            void* rdx_17 = *(rbx_7 + 0x10)
            int64_t rax_42 = sx.q(*(rax_41 + 0x38))
            
            if (rax_42.d s> *(rdx_17 + 0x38)
                    || *(*(rdx_17 + 0x30) + (rax_42 << 3)) != rax_41 + 0x30)
                rbx_7 = nullptr
else
    rbx_7 = data_143ce3880
    
    if (rbx_7 != 0)
        goto label_140836223
    
    rbx_7 = nullptr

if (*sub_1408296b0(&data_14396f170, &i_2, rbx_7) != 0xffffffff)
    sub_140812540(&data_143ce3ae0, &data_14396f0a8)

sub_140812540(&data_143ce3aa0, &data_14396f098)
sub_140812540(&data_143ce3ab0, &data_14396f098)
sub_140812540(&data_143ce3ac0, &data_14396f098)
void* const rbx_8

if (data_14396f0a0 != 3)
    rbx_8 = data_14396f098
    
    if (rbx_8 == 0)
        rbx_8 = nullptr
    else
        void* rax_45 = sub_140be01c0()
        void* rdx_19 = *(rbx_8 + 0x10)
        int64_t rax_46 = sx.q(*(rax_45 + 0x38))
        
        if (rax_46.d s> *(rdx_19 + 0x38) || *(*(rdx_19 + 0x30) + (rax_46 << 3)) != rax_45 + 0x30
                || rbx_8 == 0)
            rbx_8 = nullptr
        else
        label_1408362f4:
            void* rax_48 = sub_140bdfe30()
            void* rdx_20 = *(rbx_8 + 0x10)
            int64_t rax_49 = sx.q(*(rax_48 + 0x38))
            
            if (rax_49.d s> *(rdx_20 + 0x38)
                    || *(*(rdx_20 + 0x30) + (rax_49 << 3)) != rax_48 + 0x30)
                rbx_8 = nullptr
else
    rbx_8 = data_143ce3880
    
    if (rbx_8 != 0)
        goto label_1408362f4
    
    rbx_8 = nullptr

if (*sub_1408296b0(&data_14396f170, &i_2, rbx_8) != 0xffffffff)
    sub_140812540(&data_143ce3ae0, &data_14396f098)

sub_140812540(&data_143ce3aa0, &data_14396f0b8)
sub_140812540(&data_143ce3ab0, &data_14396f0b8)
sub_140812540(&data_143ce3ac0, &data_14396f0b8)
void* const rbx_9

if (data_14396f0c0 != 3)
    rbx_9 = data_14396f0b8
    
    if (rbx_9 == 0)
        rbx_9 = nullptr
    else
        void* rax_52 = sub_140be01c0()
        void* rdx_22 = *(rbx_9 + 0x10)
        int64_t rax_53 = sx.q(*(rax_52 + 0x38))
        
        if (rax_53.d s> *(rdx_22 + 0x38) || *(*(rdx_22 + 0x30) + (rax_53 << 3)) != rax_52 + 0x30
                || rbx_9 == 0)
            rbx_9 = nullptr
        else
        label_1408363c5:
            void* rax_55 = sub_140bdfe30()
            void* rdx_23 = *(rbx_9 + 0x10)
            int64_t rax_56 = sx.q(*(rax_55 + 0x38))
            
            if (rax_56.d s> *(rdx_23 + 0x38)
                    || *(*(rdx_23 + 0x30) + (rax_56 << 3)) != rax_55 + 0x30)
                rbx_9 = nullptr
else
    rbx_9 = data_143ce3880
    
    if (rbx_9 != 0)
        goto label_1408363c5
    
    rbx_9 = nullptr

if (*sub_1408296b0(&data_14396f170, &i_2, rbx_9) != 0xffffffff)
    sub_140812540(&data_143ce3ae0, &data_14396f0b8)

sub_140812540(&data_143ce3aa0, &data_14396f0c8)
sub_140812540(&data_143ce3ab0, &data_14396f0c8)
sub_140812540(&data_143ce3ac0, &data_14396f0c8)
void* const rbx_10

if (data_14396f0d0 != 3)
    rbx_10 = data_14396f0c8
    
    if (rbx_10 == 0)
        rbx_10 = nullptr
    else
        void* rax_59 = sub_140be01c0()
        void* rdx_25 = *(rbx_10 + 0x10)
        int64_t rax_60 = sx.q(*(rax_59 + 0x38))
        
        if (rax_60.d s> *(rdx_25 + 0x38) || *(*(rdx_25 + 0x30) + (rax_60 << 3)) != rax_59 + 0x30
                || rbx_10 == 0)
            rbx_10 = nullptr
        else
        label_140836496:
            void* rax_62 = sub_140bdfe30()
            void* rdx_26 = *(rbx_10 + 0x10)
            int64_t rax_63 = sx.q(*(rax_62 + 0x38))
            
            if (rax_63.d s> *(rdx_26 + 0x38)
                    || *(*(rdx_26 + 0x30) + (rax_63 << 3)) != rax_62 + 0x30)
                rbx_10 = nullptr
else
    rbx_10 = data_143ce3880
    
    if (rbx_10 != 0)
        goto label_140836496
    
    rbx_10 = nullptr

if (*sub_1408296b0(&data_14396f170, &i_2, rbx_10) != 0xffffffff)
    sub_140812540(&data_143ce3ae0, &data_14396f0c8)

sub_140812540(&data_143ce3aa0, &data_14396f0d8)
sub_140812540(&data_143ce3ab0, &data_14396f0d8)
sub_140812540(&data_143ce3ac0, &data_14396f0d8)

if (*sub_1408296b0(&data_14396f170, &i_2, sub_140830140(&data_14396f0d8)) != 0xffffffff)
    sub_140812540(&data_143ce3ae0, &data_14396f0d8)

sub_140812540(&data_143ce3aa0, &data_14396f0e8)
sub_140812540(&data_143ce3ab0, &data_14396f0e8)
sub_140812540(&data_143ce3ac0, &data_14396f0e8)

if (*sub_1408296b0(&data_14396f170, &i_2, sub_140830140(&data_14396f0e8)) != 0xffffffff)
    sub_140812540(&data_143ce3ae0, &data_14396f0e8)

sub_140812540(&data_143ce3aa0, &data_14396f0f8)
sub_140812540(&data_143ce3ab0, &data_14396f0f8)
sub_140812540(&data_143ce3ac0, &data_14396f0f8)

if (*sub_1408296b0(&data_14396f170, &i_2, sub_140830140(&data_14396f0f8)) != 0xffffffff)
    sub_140812540(&data_143ce3ae0, &data_14396f0f8)

sub_140812540(&data_143ce3aa0, &data_14396f108)
sub_140812540(&data_143ce3ab0, &data_14396f108)

if (*sub_1408296b0(&data_14396f170, &i_2, sub_140830140(&data_14396f108)) != 0xffffffff)
    sub_140812540(&data_143ce3ae0, &data_14396f108)

int64_t* var_90 = data_143ce38e0
int16_t var_84 = 0xffff
int32_t var_88 = 0xffff0003
sub_140812540(&data_143ce3aa0, &var_90)
sub_140812540(&data_143ce3ab0, &var_90)
sub_140812540(&data_143ce3ac0, &var_90)

if (*sub_1408296b0(&data_14396f170, &i_2, sub_140830140(&var_90)) != 0xffffffff)
    sub_140812540(&data_143ce3ae0, &var_90)

var_90 = data_143ce38e8
int32_t var_88_1 = 0xffff0003
int16_t var_84_1 = 0xffff
sub_140812540(&data_143ce3aa0, &var_90)
sub_140812540(&data_143ce3ab0, &var_90)
sub_140812540(&data_143ce3ac0, &var_90)

if (*sub_1408296b0(&data_14396f170, &i_2, sub_140830140(&var_90)) != 0xffffffff)
    sub_140812540(&data_143ce3ae0, &var_90)

var_90 = j_sub_140d2ee50(sub_140bdfe30(), data_143ce3e78, u"NiagaraTestStruct", 0)
int32_t var_88_2 = 0xffff0002
int16_t var_84_2 = 0xffff
sub_140812540(&data_143ce3aa0, &var_90)
sub_140812540(&data_143ce3ab0, &var_90)

if (*sub_1408296b0(&data_14396f170, &i_2, sub_140830140(&var_90)) != 0xffffffff)
    sub_140812540(&data_143ce3ae0, &var_90)

var_90 = j_sub_140d2ee50(sub_140bdfe30(), data_143ce3e78, u"NiagaraSpawnInfo", 0)
int32_t var_88_3 = 0xffff0002
int16_t var_84_3 = 0xffff
sub_140812540(&data_143ce3aa0, &var_90)
sub_140812540(&data_143ce3ab0, &var_90)

if (*sub_1408296b0(&data_14396f170, &i_2, sub_140830140(&var_90)) != 0xffffffff)
    sub_140812540(&data_143ce3ae0, &var_90)

sub_140812540(&data_143ce3aa0, &data_14396f148)
sub_140812540(&data_143ce3ab0, &data_14396f148)

if (*sub_1408296b0(&data_14396f170, &i_2, sub_140830140(&data_14396f148)) != 0xffffffff)
    sub_140812540(&data_143ce3ae0, &data_14396f148)

sub_140812540(&data_143ce3aa0, &data_14396f158)
sub_140812540(&data_143ce3ab0, &data_14396f158)

if (*sub_1408296b0(&data_14396f170, &i_2, sub_140830140(&data_14396f158)) != 0xffffffff)
    sub_140812540(&data_143ce3ae0, &data_14396f158)

int64_t* rax_92 = sub_14087d530()
void* rdx_54 = rax_92[0x23]
void* arg_20 = rdx_54

if (rdx_54 == 0)
    int64_t rdx_55 = *rax_92
    (*(rdx_55 + 0x390))(rax_92, rdx_55)
    rdx_54 = rax_92[0x23]
    arg_20 = rdx_54

int64_t* r14 = *(rdx_54 + 0x38)
void* var_98 = rdx_54 + 0x38
int32_t i_1 = 0
int64_t rax_94 = sx.q(*(rdx_54 + 0x40))
int32_t r15 = 0
var_90 = nullptr
i_2 = 0
var_84_3.d = 0
void* r12 = &r14[rax_94 * 3]
void* var_60
int64_t var_58

if (r14 != r12)
    do
        var_60 = *r14
        sub_140596d10(&var_58, &r14[1])
        int64_t* rbx_14 = r13
        void* rdi_2 = &r13[sx.q(i_1) * 3]
        int64_t rdx_59
        
        if (r13 != rdi_2)
            while (sub_140d16af0(rbx_14, &var_60) == 0)
                rbx_14 = &rbx_14[3]
                
                if (rbx_14 == rdi_2)
                    goto label_140836a0e
            
            int64_t rax_98
            int64_t rdx_58
            rdx_58:rax_98 = muls.dp.q(0x2aaaaaaaaaaaaaab, rbx_14 - r13)
            rdx_59 = rdx_58 s>> 2
        
        if (r13 == rdi_2 || rdx_59.d + (rdx_59 u>> 0x3f).d == 0xffffffff)
        label_140836a0e:
            int64_t i_3 = sx.q(i_1)
            i_1 = (i_3 + 1).d
            
            if (i_1 s> r15)
                sub_1405a4df0(&var_90)
                r15 = var_84_3.d
                r13 = var_90
            
            int64_t rcx_31 = i_3 * 3
            r13[rcx_31] = var_60
            sub_140596d10(&r13[rcx_31 + 1], &var_58)
        
        int64_t rcx_35 = var_58
        
        if (rcx_35 != 0)
            sub_140a74f90(rcx_35)
        
        r14 = &r14[3]
    while (r14 != r12)
    
    rdx_54 = arg_20
    arg_18 = r13
    i_2 = i_1

int64_t* r14_1 = *(rdx_54 + 0x48)
void* arg_10 = rdx_54 + 0x48
void* r12_1 = &r14_1[sx.q(*(rdx_54 + 0x50)) * 3]

if (r14_1 != r12_1)
    do
        var_60 = *r14_1
        sub_140596d10(&var_58, &r14_1[1])
        int64_t* rbx_16 = r13
        void* rdi_4 = &r13[sx.q(i_1) * 3]
        int64_t rdx_66
        
        if (r13 != rdi_4)
            while (sub_140d16af0(rbx_16, &var_60) == 0)
                rbx_16 = &rbx_16[3]
                
                if (rbx_16 == rdi_4)
                    goto label_140836b0e
            
            int64_t rax_107
            int64_t rdx_65
            rdx_65:rax_107 = muls.dp.q(0x2aaaaaaaaaaaaaab, rbx_16 - r13)
            rdx_66 = rdx_65 s>> 2
        
        if (r13 == rdi_4 || rdx_66.d + (rdx_66 u>> 0x3f).d == 0xffffffff)
        label_140836b0e:
            int64_t i_4 = sx.q(i_1)
            i_1 = (i_4 + 1).d
            
            if (i_1 s> r15)
                sub_1405a4df0(&var_90)
                r15 = var_84_3.d
                r13 = var_90
            
            int64_t rcx_41 = i_4 * 3
            r13[rcx_41] = var_60
            sub_140596d10(&r13[rcx_41 + 1], &var_58)
        
        int64_t rcx_45 = var_58
        
        if (rcx_45 != 0)
            sub_140a74f90(rcx_45)
        
        r14_1 = &r14_1[3]
    while (r14_1 != r12_1)
    
    arg_18 = r13
    i_2 = i_1

int64_t* r14_2 = r13
void* r12_3 = &r13[sx.q(i_1) * 3]
int64_t var_80
int64_t var_70

if (r13 != r12_3)
    void* r13_1 = arg_10
    void* rsi = var_98
    
    do
        var_60 = *r14_2
        sub_140596d10(&var_58, &r14_2[1])
        var_98 = var_60
        int64_t* rax_114 = sub_140d2bce0(&var_60)
        int64_t* rbx_18 = rax_114
        int64_t* rax_115
        
        if (rax_114 == 0)
            rax_115 = sub_140d30a00(&var_60, 0)
            rbx_18 = rax_115
        
        if (rax_114 != 0 || rax_115 != 0)
            int64_t* rax_116 = sub_140817960(rsi, &var_60)
            int64_t* rax_117 = sub_140817960(r13_1, &var_60)
            
            if (sub_1408192a0(rbx_18) != 0 && rbx_18 != 0)
                var_90 = rbx_18
                int16_t var_84_4 = 0xffff
                int32_t var_88_6 = 0xffff0002
                sub_140812540(&data_143ce3aa0, &var_90)
                
                if (rax_116 != 0)
                    sub_140812540(&data_143ce3ab0, &var_90)
                
                if (rax_117 != 0)
                    sub_140812540(&data_143ce3ac0, &var_90)
                
                sub_140812540(&data_143ce3ad0, &var_90)
                
                if (*sub_1408296b0(&data_14396f170, &arg_10, sub_140830140(&var_90)) != 0xffffffff)
                    sub_140812540(&data_143ce3ae0, &var_90)
            
            int64_t* rax_121 = sub_140b63b70(&var_98, &var_70)
            int64_t* rax_122 = sub_140d21e10(rbx_18, &var_80, 0)
            int16_t* rdx_81
            
            if (rax_121[1].d == 0)
                rdx_81 = &data_142d40450
            else
                rdx_81 = *rax_121
            
            int16_t* const rcx_56
            
            if (rax_122[1].d == 0)
                rcx_56 = &data_142d40450
            else
                rcx_56 = *rax_122
            
            sub_140a54510(rcx_56, rdx_81)
            int64_t rcx_57 = var_80
            
            if (rcx_57 != 0)
                sub_140a74f90(rcx_57)
            
            int64_t rcx_58 = var_70
            
            if (rcx_58 != 0)
                sub_140a74f90(rcx_58)
        
        int64_t rcx_59 = var_58
        
        if (rcx_59 != 0)
            sub_140a74f90(rcx_59)
        
        r14_2 = &r14_2[3]
    while (r14_2 != r12_3)
    
    i_1 = i_2
    r13 = arg_18

void* r12_4 = arg_20
int64_t* rdi_7 = *(r12_4 + 0x58)
void* r15_2 = &rdi_7[sx.q(*(r12_4 + 0x60)) * 3]

if (rdi_7 != r15_2)
    do
        var_60 = *rdi_7
        sub_140596d10(&var_58, &rdi_7[1])
        arg_20 = var_60
        int64_t* rax_126 = sub_140d2bce0(&var_60)
        int64_t* rbx_19 = rax_126
        int64_t* rax_127
        
        if (rax_126 == 0)
            rax_127 = sub_140d30a00(&var_60, 0)
            rbx_19 = rax_127
        
        if (rax_126 != 0 || rax_127 != 0)
            int64_t* rax_128 = sub_140817960(r12_4 + 0x58, &var_60)
            
            if (sub_140819260(rbx_19) != 0 && rbx_19 != 0)
                var_90 = rbx_19
                int32_t var_88_7 = 0xffff0003
                int16_t var_84_5 = 0xffff
                sub_140812540(&data_143ce3aa0, &var_90)
                
                if (rax_128 != 0)
                    sub_140812540(&data_143ce3ab0, &var_90)
                
                sub_140812540(&data_143ce3ad0, &var_90)
                
                if (*sub_1408296b0(&data_14396f170, &arg_10, sub_140830140(&var_90)) != 0xffffffff)
                    sub_140812540(&data_143ce3ae0, &var_90)
            
            int64_t* rax_132 = sub_140b63b70(&arg_20, &var_80)
            int64_t* rax_133 = sub_140d21e10(rbx_19, &var_70, 0)
            int16_t* rdx_91
            
            if (rax_132[1].d == 0)
                rdx_91 = &data_142d40450
            else
                rdx_91 = *rax_132
            
            int16_t* const rcx_69
            
            if (rax_133[1].d == 0)
                rcx_69 = &data_142d40450
            else
                rcx_69 = *rax_133
            
            sub_140a54510(rcx_69, rdx_91)
            int64_t rcx_70 = var_70
            
            if (rcx_70 != 0)
                sub_140a74f90(rcx_70)
            
            int64_t rcx_71 = var_80
            
            if (rcx_71 != 0)
                sub_140a74f90(rcx_71)
        
        int64_t rcx_72 = var_58
        
        if (rcx_72 != 0)
            sub_140a74f90(rcx_72)
        
        rdi_7 = &rdi_7[3]
    while (rdi_7 != r15_2)
    
    i_1 = i_2
    r13 = arg_18

var_90 = sub_14086e490()
int16_t var_84_6 = 0xffff
int32_t var_88_8 = 0xffff0002
sub_140812540(&data_143ce3aa0, &var_90)
sub_140812540(&data_143ce3ab0, &var_90)
sub_140812540(&data_143ce3ac0, &var_90)
sub_140812540(&data_143ce3ad0, &var_90)

if (*sub_1408296b0(&data_14396f170, &i_2, sub_140830140(&var_90)) != 0xffffffff)
    sub_140812540(&data_143ce3ae0, &var_90)

var_90 = sub_14086c120()
int32_t var_88_9 = 0xffff0003
int16_t var_84_7 = 0xffff
sub_140812540(&data_143ce3aa0, &var_90)
sub_140812540(&data_143ce3ab0, &var_90)
sub_140812540(&data_143ce3ac0, &var_90)
int32_t* result = sub_1408296b0(&data_14396f170, &i_2, sub_140830140(&var_90))

if (*result != 0xffffffff)
    result = sub_140812540(&data_143ce3ae0, &var_90)

if (i_1 != 0)
    void* rbx_20 = &r13[1]
    int32_t i
    
    do
        int64_t rcx_75 = *rbx_20
        
        if (rcx_75 != 0)
            result = sub_140a74f90(rcx_75)
        
        rbx_20 += 0x18
        i = i_1
        i_1 -= 1
    while (i != 1)

if (r13 == 0)
    return result

return sub_140a74f90(r13)
