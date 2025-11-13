// 函数: sub_1422e3d30
// 地址: 0x1422e3d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = 0
void* rdi = nullptr
int16_t* var_68

for (void** i = data_143f1d998; i != 0; i = *i)
    var_68 = nullptr
    int32_t var_60_1 = 0
    sub_1405947f0(&var_68, 0xe)
    int32_t rsi_1 = var_60_1 + 0xe
    
    if (rsi_1 s> 0)
        sub_140594770(&var_68)
    
    int16_t* r15_1 = var_68
    UnDecorator::getReferenceType(r15_1, u"InstancedView", 0x1c)
    int16_t* const rdx_2 = &data_142d40450
    
    if (rsi_1 != 0)
        rdx_2 = r15_1
    
    rsi_1.b = sub_140a54510(*(i[2] + 0x10), rdx_2) == 0
    
    if (r15_1 != 0)
        sub_140a74f90(r15_1)
    
    if (rsi_1.b != 0)
        rdi = i[2]
        break

var_68 = nullptr
int64_t var_60_2 = 0
sub_1405947f0(&var_68, 0x13)
int32_t r15_2 = var_60_2:4.d
int32_t rsi_2 = var_60_2.d + 0x13
var_60_2.d = rsi_2

if (rsi_2 s> r15_2)
    sub_140594770(&var_68)
    r15_2 = var_60_2:4.d
    rsi_2 = var_60_2.d

int16_t* rbx = var_68
int16_t var_78 = 0x3f
sub_1405a7220(rbx, 0x13, "struct ViewState\r\n", 0x13, 0x3f)

if (arg1 != &var_68)
    int16_t* rcx_8 = *arg1
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    *arg1 = rbx
    arg1[1].d = rsi_2
    *(arg1 + 0xc) = r15_2
else if (rbx != 0)
    sub_140a74f90(rbx)

sub_140a20b00(arg1, "{\r\n", 3)
int32_t i_1 = 0
int64_t var_38
int32_t var_30

if (*(rdi + 0x70) s> 0)
    do
        int64_t* r15_4 = *(rdi + 0x68) + r13
        int16_t* var_58 = nullptr
        int32_t var_50_1 = 0
        sub_1422e42b0(&var_58, r15_4)
        uint64_t r8_1 = zx.q(*(r15_4 + 0x24))
        int16_t* rbx_1 = nullptr
        int16_t* rax_4
        bool cond:2_1
        
        if (r8_1.d != 0)
            sub_140a2e390(&var_68, u"[%u]", r8_1)
            cond:2_1 = var_60_2.d != 0
            rbx_1 = var_68
            rax_4 = rbx_1
            var_68 = nullptr
            var_60_2 = 0
        
        if (r8_1.d == 0 || not(cond:2_1))
            rax_4 = &data_142d40450
        
        int16_t* const r8_2 = &data_142d40450
        int16_t* rsi_3 = var_58
        *r15_4
        
        if (var_50_1 != 0)
            r8_2 = rsi_3
        
        var_78.q = rax_4
        int16_t* var_48
        sub_140a2e390(&var_48, u"%s %s%s", r8_2)
        int16_t* r15_5 = var_48
        var_48 = nullptr
        int32_t var_40
        int32_t arg_8 = var_40
        var_40.q = 0
        
        if (rbx_1 != 0)
            sub_140a74f90(rbx_1)
        
        if (rsi_3 != 0)
            sub_140a74f90(rsi_3)
        
        int16_t* const r8_3 = &data_142d40450
        
        if (arg_8 != 0)
            r8_3 = r15_5
        
        sub_140a2e390(&var_38, u"\t%s;\r\n", r8_3)
        int32_t r8_5
        
        if (var_30 == 0)
            r8_5 = 0
        else
            r8_5 = var_30 - 1
        
        sub_140a20ba0(arg1, var_38, r8_5)
        int64_t rcx_18 = var_38
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
        
        if (r15_5 != 0)
            sub_140a74f90(r15_5)
        
        i_1 += 1
        r13 += 0x30
    while (i_1 s< *(rdi + 0x70))

sub_140a20b00(arg1, "};\r\n", 4)
sub_140a20b00(arg1, "ViewState GetPrimaryView()\r\n", 0x1c)
sub_140a20b00(arg1, "{\r\n", 3)
sub_140a20b00(arg1, "\tViewState Result;\r\n", 0x14)
int32_t i_2 = 0

if (*(rdi + 0x70) s> 0)
    int64_t* rsi_4 = nullptr
    
    do
        sub_140a2e390(&var_38, u"\tResult.%s = View.%s;\r\n", *(rsi_4 + *(rdi + 0x68)))
        int32_t r8_8
        
        if (var_30 == 0)
            r8_8 = 0
        else
            r8_8 = var_30 - 1
        
        sub_140a20ba0(arg1, var_38, r8_8)
        int64_t rcx_26 = var_38
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        i_2 += 1
        rsi_4 = &rsi_4[6]
    while (i_2 s< *(rdi + 0x70))

sub_140a20b00(arg1, "\treturn Result;\r\n", 0x11)
sub_140a20b00(arg1, "}\r\n", 3)
sub_140a20b00(arg1, "ViewState GetInstancedView()\r\n", 0x1e)
sub_140a20b00(arg1, "{\r\n", 3)
sub_140a20b00(arg1, "\tViewState Result;\r\n", 0x14)
int32_t i_3 = 0

if (*(rdi + 0x70) s> 0)
    int64_t* rsi_5 = nullptr
    
    do
        sub_140a2e390(&var_38, u"\tResult.%s = InstancedView.%s;\r\n", *(rsi_5 + *(rdi + 0x68)))
        int32_t r8_11
        
        if (var_30 == 0)
            r8_11 = 0
        else
            r8_11 = var_30 - 1
        
        sub_140a20ba0(arg1, var_38, r8_11)
        int64_t rcx_34 = var_38
        
        if (rcx_34 != 0)
            sub_140a74f90(rcx_34)
        
        i_3 += 1
        rsi_5 = &rsi_5[6]
    while (i_3 s< *(rdi + 0x70))

sub_140a20b00(arg1, "\treturn Result;\r\n", 0x11)
sub_140a20b00(arg1, "}\r\n", 3)
sub_140a20b00(arg1, "#if COMPILER_METAL && (COMPILER_HLSLCC == 1)\r\n", 0x2e)
sub_140a20b00(arg1, "ViewState ResolveView(uint ViewIndex)\r\n", 0x27)
sub_140a20b00(arg1, "{\r\n", 3)
sub_140a20b00(arg1, "\tViewState Result;\r\n", 0x14)
int32_t i_4 = 0

if (*(rdi + 0x70) s> 0)
    int64_t* rbx_2 = nullptr
    
    do
        int64_t r8_12 = *(rbx_2 + *(rdi + 0x68))
        var_78.q = r8_12
        sub_140a2e390(&var_38, \tResult.%s = (ViewIndex == 0) ? View.%s : InstancedView.%s;\r\n", 
            r8_12)
        int32_t r8_14
        
        if (var_30 == 0)
            r8_14 = 0
        else
            r8_14 = var_30 - 1
        
        sub_140a20ba0(arg1, var_38, r8_14)
        int64_t rcx_43 = var_38
        
        if (rcx_43 != 0)
            sub_140a74f90(rcx_43)
        
        i_4 += 1
        rbx_2 = &rbx_2[6]
    while (i_4 s< *(rdi + 0x70))

sub_140a20b00(arg1, "\treturn Result;\r\n", 0x11)
sub_140a20b00(arg1, "}\r\n", 3)
return sub_140a20b00(arg1, "#endif\r\n", 8) __tailcall
