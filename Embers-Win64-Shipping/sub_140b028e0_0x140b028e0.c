// 函数: sub_140b028e0
// 地址: 0x140b028e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_9d8
int64_t rax_1 = __security_cookie ^ &var_9d8
char rbx = 0
int32_t var_998 = 0
void var_968
sub_140ae6a10(&var_968)
int16_t* var_978
sub_140afc990(&var_978, u"Manifest.ini")
char rax_2 = sub_140b16090(&var_978)
int16_t* const string = &data_142d40450
void** const string_1
char var_9b0

if (rax_2 == 0)
    int64_t* rax_3 = sub_140b1a780(&var_998, &var_978)
    int16_t* const rbx_1
    
    if (rax_3[1].d == 0)
        rbx_1 = &data_142d40450
    else
        rbx_1 = *rax_3
    
    int64_t* rax_4 = __crt_deferred_errno_cache::get(&data_143db7b00)
    var_9b0 = 0
    string_1 = &data_142e71e88
    int64_t r9_1 = *rax_4
    (*(r9_1 + 0x100))(rax_4, rbx_1, &string_1, r9_1, string_1, var_9b0)
    rbx = 1

int64_t rdi

if (rax_2 != 0 || var_9b0 != 0)
    rdi.b = 0
else
    rdi = 1

if ((rbx & 1) != 0)
    int64_t rcx_5 = var_998.q
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

if (rdi.b != 0)
    sub_140afa2d0()

int32_t r14 = 0
int64_t rbx_2 = -1
int32_t var_9ac

if (sub_140b16090(&var_978) == 0)
label_140b02b06:
    int64_t var_990
    int16_t var_828[0x400]
    
    if (r14 s< 1)
        sub_140afc990(&string_1, u"EditorSettings.ini")
        void** const string_8 = &data_142d40450
        
        if (var_9b0.d != 0)
            string_8 = string_1
        
        int16_t** rax_9 = sub_140afc990(&var_998, u"EditorGameAgnostic.ini")
        int16_t* rcx_16
        
        if (rax_9[1].d == 0)
            rcx_16 = &data_142d40450
        else
            rcx_16 = *rax_9
        
        sub_140afed60(rcx_16, string_8)
        int64_t rcx_17 = var_998.q
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        sub_140ae6a10(&var_828)
        sub_140afcd00(&var_828, &string_1)
        sub_140af9d40(&var_828, /Script/UnrealEd.EditorGameAgnosticSettings", 
            /Script/UnrealEd.EditorSettings")
        var_998.q = 0
        var_990 = 0
        sub_140b030b0(&var_828, &string_1, 0, &var_998)
        int64_t rcx_22 = var_998.q
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        r14 = 1
        sub_140ae7280(&var_828)
        void** const string_4 = string_1
        
        if (string_4 != 0)
            sub_140a74f90(string_4)
        
        if ((*u"Embers")[0] != 0)
            goto label_140b02c0b
    else if (r14 s< 2 && (*u"Embers")[0] != 0)
    label_140b02c0b:
        
        if (sub_140a54510(u"Embers", u"None") != 0)
            sub_140afa7a0(u"EditorLayout.ini", u"EditorLayout.ini")
            sub_140afa7a0(u"EditorKeyBindings.ini", u"EditorKeyBindings.ini")
            r14 = 2
    
    memset(&var_828, 0, 0x800)
    sub_140b01a80(&var_828, u"%lld", sx.q(r14))
    string_1 = nullptr
    var_9b0.q = 0
    sub_1405947f0(&string_1, 9)
    int32_t rax_11 = var_9b0.d + 9
    var_9b0.d = rax_11
    
    if (rax_11 s> var_9ac)
        sub_140594770(&string_1)
    
    UnDecorator::getReferenceType(string_1, u"Manifest", 0x12)
    int64_t* rax_12 = sub_140af00b0(&var_968, &string_1)
    void** const string_5 = string_1
    
    if (string_5 != 0)
        sub_140a74f90(string_5)
    
    sub_14093f560(rax_12, &var_998, *sub_140b58260(&string_1, u"Version", 1))
    int64_t rax_14 = sx.q(var_998)
    void* const rax_17
    
    if (rax_14.d == 0xffffffff)
        rax_17 = nullptr
    else
        rax_17 = rax_14 * 0x30 + *rax_12
    
    int64_t* rdi_3 = rax_17 + 8
    
    if (rax_17 == 0)
        rdi_3 = nullptr
    
    void* r8_9
    
    if (rdi_3 != 0)
        int16_t* rax_20
        
        if (rdi_3[1].d == 0)
            rax_20 = &data_142d40450
        else
            rax_20 = *rdi_3
        
        r8_9 = &var_828 - rax_20
        uint32_t i
        uint32_t rdx_20
        
        do
            rdx_20 = zx.d(*rax_20)
            i = zx.d(*(rax_20 + r8_9))
            
            if (rdx_20 != i)
                break
            
            rax_20 = &rax_20[1]
        while (i != 0)
        
        if (rdx_20 - i != 0)
            int32_t rcx_43 = 0
            int32_t rdx_22 = 0
            var_990.d = 0
            var_990:4.d = 0
            char var_918_2 = 1
            var_998.q = 0
            
            if (var_828[0] != 0)
                do
                    rbx_2 += 1
                while (var_828[rbx_2] != 0)
                
                if (rbx_2.d + 1 s> 0)
                    sub_1405947f0(&var_998, rbx_2.d + 1)
                    rdx_22 = var_990:4.d
                    rcx_43 = var_990.d
                
                int32_t rax_21 = rcx_43 + rbx_2.d + 1
                var_990.d = rax_21
                
                if (rax_21 s> rdx_22)
                    sub_140594770(&var_998)
                
                UnDecorator::getReferenceType(var_998.q, &var_828, (rbx_2.d + 1) * 2)
                rcx_43 = var_990.d
            
            int64_t var_988 = 0
            int64_t var_980_1 = 0
            
            if (rcx_43 != 0)
                string = var_998.q
            
            wchar16* i_6
            i_6, r8_9 = wcschr(string, 0x25)
            wchar16* i_4 = i_6
            
            if (i_6 != 0)
                wchar16* i_1
                
                do
                    int64_t* rax_22 = sub_140af9950(i_4)
                    
                    if (rax_22 != 0)
                        sub_140aef750(&var_998, &var_988)
                        break
                    
                    i_1, r8_9 = wcschr(&i_4[1], (rax_22 + 0x25).w)
                    i_4 = i_1
                while (i_1 != 0)
            
            if (rdi_3 != &var_998)
                int64_t rcx_51 = *rdi_3
                
                if (rcx_51 != 0)
                    sub_140a74f90(rcx_51)
                
                *rdi_3 = var_998.q
                rdi_3[1].d = var_990.d
                *(rdi_3 + 0xc) = var_990:4.d
                int64_t var_990_1 = 0
                var_998.q = 0
            
            if (&rdi_3[2] == &var_988)
                int64_t rcx_53 = var_988
                
                if (rcx_53 != 0)
                    sub_140a74f90(rcx_53)
            else
                int64_t rcx_52 = rdi_3[2]
                
                if (rcx_52 != 0)
                    sub_140a74f90(rcx_52)
                
                rdi_3[2] = var_988
                rdi_3[3].d = var_980_1.d
                *(rdi_3 + 0x1c) = var_980_1:4.d
                int64_t var_980_2 = 0
                var_988 = 0
            
            int64_t rcx_54 = var_998.q
            
            if (rcx_54 != 0)
                sub_140a74f90(rcx_54)
    else
        int32_t rcx_32 = 0
        int32_t rdx_13 = 0
        var_9b0.d = 0
        int32_t var_9ac_1 = 0
        string_1 = nullptr
        
        if (var_828[0] != 0)
            do
                rbx_2 += 1
            while (var_828[rbx_2] != 0)
            
            if (rbx_2.d + 1 s> 0)
                sub_1405947f0(&string_1, rbx_2.d + 1)
                rdx_13 = var_9ac_1
                rcx_32 = var_9b0.d
            
            int32_t rax_18 = rcx_32 + rbx_2.d + 1
            var_9b0.d = rax_18
            
            if (rax_18 s> rdx_13)
                sub_140594770(&string_1)
            
            UnDecorator::getReferenceType(string_1, &var_828, (rbx_2.d + 1) * 2)
            rcx_32 = var_9b0.d
        
        int64_t var_9a8 = 0
        int64_t var_9a0_1 = 0
        
        if (rcx_32 != 0)
            string = string_1
        
        wchar16* i_5 = wcschr(string, 0x25)
        wchar16* i_3 = i_5
        
        if (i_5 != 0)
            wchar16* i_2
            
            do
                int64_t* rax_19 = sub_140af9950(i_3)
                
                if (rax_19 != 0)
                    sub_140aef750(&string_1, &var_9a8)
                    break
                
                i_2 = wcschr(&i_3[1], (rax_19 + 0x25).w)
                i_3 = i_2
            while (i_2 != 0)
        
        sub_140b58260(&var_998, u"Version", 1)
        sub_140ae49f0(rax_12, &var_998, &string_1)
        int64_t rcx_42 = var_9a8
        
        if (rcx_42 != 0)
            sub_140a74f90(rcx_42)
        
        void** const string_6 = string_1
        
        if (string_6 != 0)
            sub_140a74f90(string_6)
        
        char var_918_1 = 1
    
    string_1 = nullptr
    r8_9.b = 1
    var_9b0.q = 0
    sub_140b030b0(&var_968, &var_978, r8_9.b, &string_1)
    void** const string_7 = string_1
    
    if (string_7 != 0)
        sub_140a74f90(string_7)
else
    int16_t* const rsi_1 = &data_142d40450
    int32_t rdx_3 = 0
    string_1 = nullptr
    int32_t var_970
    
    if (var_970 != 0)
        rsi_1 = var_978
    
    int32_t rcx_7 = 0
    var_9b0.d = 0
    var_9ac = 0
    
    if (rsi_1 != 0 && *rsi_1 != 0)
        int64_t rdi_1 = -1
        
        do
            rdi_1 += 1
        while (rsi_1[rdi_1] != 0)
        
        if (rdi_1.d + 1 s> 0)
            sub_1405947f0(&string_1, rdi_1.d + 1)
            rcx_7 = var_9ac
            rdx_3 = var_9b0.d
        
        int32_t rax_6 = rdx_3 + rdi_1.d + 1
        var_9b0.d = rax_6
        
        if (rax_6 s> rcx_7)
            sub_140594770(&string_1)
        
        UnDecorator::getReferenceType(string_1, rsi_1, (rdi_1.d + 1) * 2)
    
    sub_140afcd00(&var_968, &string_1)
    void** const string_2 = string_1
    
    if (string_2 != 0)
        sub_140a74f90(string_2)
    
    string_1 = nullptr
    var_9b0.q = 0
    
    if (sub_140af5d90(&var_968, u"Manifest", u"Version", &string_1) == 0)
        void** const string_3 = string_1
        
        if (string_3 != 0)
            sub_140a74f90(string_3)
        
        goto label_140b02b06
    
    void** const _String = &data_142d40450
    void** const _String_1 = string_1
    
    if (var_9b0.d != 0)
        _String = _String_1
    
    int64_t rax_8 = _wtoi64(_String)
    
    if (_String_1 != 0)
        sub_140a74f90(_String_1)
    
    if (rax_8 s>= 3)
        goto label_140b02b06
    
    r14 = rax_8.d
    
    if (rax_8.d != 2)
        goto label_140b02b06
int16_t* rcx_56 = var_978

if (rcx_56 != 0)
    sub_140a74f90(rcx_56)

int64_t result = sub_140ae7280(&var_968)
__security_check_cookie(rax_1 ^ &var_9d8)
return result
